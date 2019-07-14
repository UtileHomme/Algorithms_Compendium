// https://www.interviewbit.com/problems/reverse-integer/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int reverse(int A)
  {
    long long num = 0;
    bool sign = false;

    if(A<0)
    {
      sign = true;
    }

    long long a = abs(A);

    while(a>0)
    {
      num = num*10 + a%10;
      if(num>INT_MAX)
      {
        return 0;
      }
      a = a/10;
    }

    if(sign==true)
    {
      num = -num;
      if(num<INT_MIN)
      {
        return 0;
      }
    }

    return num;
  }
};

int main()
{
  Solution s;

  int k = -3423;

  int rev = s.reverse(k);

  cout<<rev;
}
