// https://www.interviewbit.com/problems/rotated-sorted-array-search/

// https://www.geeksforgeeks.org/?p=1068

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


int Search(vector<int> A,int B)
{
  int low=0; int high=A.size()-1;
  while(low<=high)
  {
    int mid=(low+high)/2;
    if(A[mid]==B)
    return mid;

    //mid..h is sorted
    if(A[mid]<=A[high])
    {
      //check for the right side
      if(B>A[mid]&&B<=A[high])
      {
        low=mid+1;
      }
      //check for the left side
      else
      {
        high=mid-1;
      }
    }
    // l.. mid is sorted
    else
    {
      if(B>=A[low]&&B<A[mid])
      {
        high=mid-1;
      }
      else
      {
        low=mid+1;
      }
    }
  }
  return -1;
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

  cout<<Search(A, key);

  return 0;
}
