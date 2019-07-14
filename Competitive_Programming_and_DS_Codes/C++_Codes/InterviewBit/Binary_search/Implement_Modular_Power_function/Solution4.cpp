// https://www.interviewbit.com/problems/implement-power-function/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  long power(int a, int N, int d)
  {
    if(N==0)
    {
        return 1%d;
    }
    else if(N==1)
    {
        return a%d;
    }
    else
    {
        int R = power(a, N/2,d) % d;

        if(N%2==0)
        {
            return (R*R)%d;
        }
        else
        {
            return (R*a*R)%d;
        }
    }
  }
};

int main()
{
  int a = 2;
  int N = 3;
  int d = 5;

  Solution s;

  if(a==0 && N ==0)
  {
    return 0;
  }

  long int k = s.power(a, N, d);

  if(k<0)
  {
    cout<<k+d;
  }
  else
  {
  cout<<k;
  }

  return 0;
}
