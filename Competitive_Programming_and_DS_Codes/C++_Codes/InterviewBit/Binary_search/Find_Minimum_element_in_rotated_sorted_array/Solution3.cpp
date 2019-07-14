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
    for(int i=0;i<A.size()-1; i++)
    {
      if(A[i+1]<A[i])
      {
        return A[i+1];
      }
    }

    return A[0];
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
