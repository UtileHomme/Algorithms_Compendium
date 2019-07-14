// https://www.interviewbit.com/problems/reverse-integer/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int reverse(int A)
  {
    int sign = 1;

    if(A<0)
    {
      sign = -1;
      A = (-1)*A;
    }

    int rev = 0;

    while(A!=0)
    {
      int digit = A%10;

      if(rev>INT_MAX/10 || (rev==INT_MAX/10 && digit>INT_MAX%10))
      {
        return 0;
      }
      else
      {
        rev = rev*10 + digit;
      }

      A = A/10;
    }

    rev = rev * sign;

    return rev;
  }
};

int main()
{
  Solution s;

  int k = -3423;

  int rev = s.reverse(k);

  cout<<rev;
}
