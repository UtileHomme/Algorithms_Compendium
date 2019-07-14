// https://www.interviewbit.com/problems/rotated-sorted-array-search/

// https://www.geeksforgeeks.org/?p=1068

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


int Search(vector<int> A, int l, int h, int key)
{
  if(l>h)
  {
    return -1;
  }

  int mid = l + (h-l)/2;

  if(A[mid] == key)
  {
    return mid;
  }

  //if A[l...mid] is sorted
  if(A[l]<=A[mid])
  {
    //the key lies between the sorted A[l..mid]
    if(key>=A[l] && key<=A[mid])
    {
      return Search(A, l, mid-1, key);
    }
    // the key lies beyond the sorted A[l...mid]
    else
    {
      return Search(A, mid+1, h, key);
    }
  }

  // If A[l..mid] is not sorted, then A[mid..r] must be sorted
  if(key>=A[mid] && key<=A[h])
  {
    return Search(A, mid+1, h, key);
  }
  else
  {
    return Search(A, l, mid-1, key);
  }
}

int main()
{
  vector <int> A = {5,6,7,8,9,10,1,2,3};

  int low = 0;

  int high = A.size()-1;

  int key = 6;

  cout<<Search(A, low, high, key);

  return 0;
}
