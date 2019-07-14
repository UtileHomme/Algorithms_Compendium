// https://www.geeksforgeeks.org/find-minimum-element-in-a-sorted-and-rotated-array/

// https://www.interviewbit.com/problems/rotated-array/

// https://www.youtube.com/watch?v=4qjprDkJrjY&feature=player_embedded

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int findMin(const vector <int> &A, int low, int high)
  {
    //this happens when the array is not rotated at all and is simply sorted
    if(low>high)
    {
      return A[0];
    }

    //if there is only one element left
    if(low==high)
    {
      return A[low];
    }

    int mid = low + (high-low)/2;

    //if the element just next to the middle element is less than it
    if(mid<high && A[mid+1]<A[mid])
    {
      return A[mid+1];
    }

    //if the element just before the middle element is more than it
    if(mid>low && A[mid-1]>A[mid])
    {
      return A[mid];
    }

    //if the high element is more than the middle element, the minimum element is
    //on the left side
    if(A[high]>A[mid])
    {
      return findMin(A, low, mid-1);
    }

    //if the high element is less than the middle element, the minimum element is
    //on the right side
    return findMin(A, mid+1, high);
  }
};

int main()
{
  Solution s;

  vector <int> A = {5, 6, 1, 2, 3, 4};

  int low = 0;
  int high = A.size()-1;
  int k = s.findMin(A, low, high);

  cout<<k;

  return 0;
}
