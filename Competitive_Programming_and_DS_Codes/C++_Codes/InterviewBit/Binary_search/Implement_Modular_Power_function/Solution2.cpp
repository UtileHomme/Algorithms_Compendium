// https://www.interviewbit.com/problems/implement-power-function/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int power(int a, int N, int d)
  {
    if(N==0)
    {
      return 1%d;
    }

    long long ans = 1, base = a;

    while(N>0)
    {
      // We need (base ** n) % p.
      // Now there are 2 cases.
      // 1) n is even. Then we can make base = base^2 and n = n / 2.
      // 2) n is odd. So we need base * base^(n-1)

      if(N%2==1)
      {
        ans = (ans * base) % d;
        N--;
      }
      else
      {
        base = (base * base) % d;
        N = N / 2;
      }
    }

    if(ans<0)
    {
      ans = (ans + d) % d;
    }

    return ans;

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
