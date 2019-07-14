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
  int findMin(const vector <int> &A)
  {

    int low = 0;
    int high = (int)A.size()-1;

    int len = A.size();

    while(low<=high)
    {

      //this happens when the array is not rotated at all and is simply sorted
      if(A[low]<=A[high])
      {
        return A[low];
      }

      int mid = low + (high-low)/2;

      int next = (mid+1)%len;
      int prev = (mid-1 + len)%len;

      //if the element just before the middle element is more than it
      if(A[mid]<A[next] && A[mid]<A[prev])
      {
        return A[mid];
      }

      //if the high element is more than the middle element, the minimum element is
      //on the left side
      else if(A[high]>A[mid])
      {
        high = mid - 1;
      }
      //if the high element is less than the middle element, the minimum element is
      //on the right side
      else if(A[mid]>A[high])
      {
        low = mid + 1;
      }

    }
    return -1;
  }
};

int main()
{
  Solution s;

  vector <int> A = {5, 6, 1, 2, 3, 4};

  int k = s.findMin(A);

  cout<<k;

  return 0;
}
