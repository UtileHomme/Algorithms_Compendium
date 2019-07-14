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
      int cnt = -1;

      int key = A[i];

      for(int j=0;j<size;j++)
      {
        if(A[j]>key)
        {
          cnt++;
        }
      }

      if((cnt+1)==key)
      {
        return 1;
      }
    }

    return -1;
  }
};

int main()
{
  Solution s;

  //Other test cases = -4, -3 , -1, -4, 0
  vector <int> A = {6,5,4,1,3,3,3,3,3};

  int k = s.solve(A);

  cout<<k;
  return 0;
}
