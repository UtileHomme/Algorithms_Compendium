// https://www.interviewbit.com/problems/reverse-integer/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int reverse(int A)
  {
    int absA = abs(A);

    int rev = 0;

    while(absA!=0)
    {
      int digit = absA%10;

      if(rev>INT_MAX/10 || (rev==INT_MAX/10 && digit>INT_MAX%10))
      {
        return 0;
      }
      else
      {
        rev = rev*10 + digit;
      }

      absA = absA/10;
    }

    if(A<0)
    {
      rev = (-1) * rev;
    }

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
