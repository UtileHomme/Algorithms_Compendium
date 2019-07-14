// https://www.interviewbit.com/problems/square-root-of-integer/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int sqrt(int A)
  {
    if(A==0 || A==1)
    {
      return A;
    }

    // Starting from 1, try all numbers till "i*i" is greater than or equal to A
    int i=1, res = 1;
    while(res<=A)
    {
      i++;
      res = i*i;
    }

    return i-1;
  }
};

int main()
{
  Solution s;

  int A = 37;
  int k = s.sqrt(A);

  cout<<k;
}
