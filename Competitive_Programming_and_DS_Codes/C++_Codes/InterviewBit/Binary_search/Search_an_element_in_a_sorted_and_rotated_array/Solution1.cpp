// https://www.interviewbit.com/problems/rotated-sorted-array-search/

// https://www.geeksforgeeks.org/?p=1068

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

  int binarySearch(vector <int> A, int low, int high, int key)
  {
    if(high<low)
    {
      return -1;
    }

    int mid = low + (high-low)/2;

    if(key==A[mid])
    {
      return mid;
    }

    if(A[mid]<key)
    {
      return binarySearch(A, mid+1, high, key);
    }
    else
    {
      return binarySearch(A, low, mid-1, key);
    }
  }

  int findPivot(vector <int> A, int low, int high)
  {
    if(high<low)
    {
      return -1;
    }

    if(high==low)
    {
      return low;
    }

    int mid = low + (high-low)/2;

    if(mid<high && A[mid+1]<A[mid])
    {
      return mid;
    }
    if(mid>low && A[mid]<A[mid-1])
    {
      return (mid-1);
    }

    //the pivot is on the left side
    if(A[low]>=A[mid])
    {
      return findPivot(A, low, mid-1);
    }

    //the pivot is on the right side
    return findPivot(A, mid+1, high);
  }

int pivotedBinarySearch(vector<int> A, int key)
{
  // pivot is the point where the element after that position is less than it
  int pivot = findPivot(A, 0, A.size()-1);

  // if we didn't find the pivot, then the array is not rotated
  if(pivot==-1)
  {
    return binarySearch(A, 0, A.size()-1, key);
  }

  //if the element at the pivot is the key we are looking for, return the index
  if(A[pivot]==key)
  {
    return pivot;
  }

  //since the array is rotated, the array is divided into two halves
  //A[0]<A[1]<.... <A[pivot]
  //A[pivot]>A[pivot+1]
  //A[pivot+1]<A[pivot+2]<... <A[n-1]

  if(A[0]<=key)
  //this means that the key is on the left side of the pivot as shown for the first part in comments
  {
    return binarySearch(A, 0, pivot-1,key);
  }
  // this means that the key is on the right side of the pivot as shown for the second part in comments
  else
  {
    return binarySearch(A, pivot+1, A.size()-1, key);
  }
}

int main()
{
  vector <int> A = {5,6,7,8,9,10,1,2,3};

  int key = 2;

  cout<<pivotedBinarySearch(A,key);

  return 0;
}
