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
    int mid;

    while(low<=high)
    {
      mid = low + (high - low)/2;

      // for the case where mid might be the last index
      int next = (mid+1)%A.size();

      //for the case where mid might be the first index
      int prev = (mid-1+A.size())%A.size();

      //for the case when the array is in ascending order from start to beginning
      if(A[low]<=A[high])
      {
        return low;
      }

      else if((A[mid]<=A[prev]) && (A[mid]<=A[next]))
      {
        return mid;
      }
      else if(A[mid]<=A[high])
      {
        high = mid - 1;
      }
      else
      {
        low = mid + 1;
      }
    }

    return -1;
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

  int result = binarySearch(A, 0, pivot-1, key);

  if(result==-1)
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
