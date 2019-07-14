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
    int high = A.size() - 1;

    int mid = low + (high-low)/2;

    if(A[mid]>A[high])
    {
      low = mid+1;
    }
    else
    {
      high = mid;
    }

    if(low==high)
    {
      return A[low];
    }
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
