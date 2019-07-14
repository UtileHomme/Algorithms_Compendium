// https://www.interviewbit.com/problems/implement-power-function/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int power(int x, int y, int p)
  {
    long a = x;
    long N = y;
    long d = p;

    if(a==0)
    {
      return 0;
    }

    long res = 1;

    a = a % d;

    while(N>0)
    {
      // if "N" is odd
      if(N&1)
      {
        res = (res*a)%d;
      }

      // N = N/2
      N = N>>1;

      a = (a*a)%d;
    }

    if(res<0)
    {
      res = res + d;
    }

    return res;
  }
};

int main()
{
  int a = 2;
  int N = 3;
  int d = 5;

  Solution s;
  int k = s.power(a, N, d);

  cout<<k;

  return 0;
}
