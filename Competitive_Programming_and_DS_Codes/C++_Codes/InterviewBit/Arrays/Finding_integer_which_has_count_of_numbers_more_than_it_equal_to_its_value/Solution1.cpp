// https://www.interviewbit.com/problems/noble-integer/

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int solve(vector <int> &A)
  {
    int size = A.size();

    sort(A.begin(), A.end());

    for(int i=0;i<size;i++)
    {
      int cnt = INT_MIN;

      int key = A[i];

      if(A[i+1]>key)
      {
        cnt = size-i-1;
      }
      else
      {
        cnt = INT_MIN;
      }

      if(cnt==key)
      {
        return 1;
      }
    }

      if(A[size-1]==0)
      {
        return 1;
      }

      return -1;
  }
};

int main()
{
  Solution s;

  //Other test cases = -4, -3 , -1, -4, 0
  vector <int> A = {6,5,4,1,3};

  int k = s.solve(A);

  cout<<k;
  return 0;
}
