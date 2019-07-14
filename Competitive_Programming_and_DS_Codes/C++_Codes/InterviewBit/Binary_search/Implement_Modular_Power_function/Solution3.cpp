// https://www.interviewbit.com/problems/implement-power-function/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int power(int a, int N, int d)
  {
    if(N==1)
    {
      if(a<0)
      {
        return (a%d) + d;
      }
      else
      {
        return a;
      }
    }

    if(N==0 && a==0)
    {
      return 0;
    }
    if(N==0)
    {
      return (1%d);
    }

    long long temp = power(a, N/2, d) % d;

    long long mul = (temp * temp) % d;

    if(mul<0)
    {
      mul = mul + d;
    }

    if(N%2==0)
    {
      return mul;
    }
    else
    {
      return (mul*a) % d;
    }
  }
};

int main()
{
  int a = 2;
  int N = 4;
  int d = 5;

  Solution s;
  int k = s.power(a, N, d);

  cout<<k;

  return 0;
}
