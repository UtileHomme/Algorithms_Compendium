// https://www.interviewbit.com/problems/atoi/

// https://www.geeksforgeeks.org/write-your-own-atoi/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int atoi(const string A)
  {
    int sign = 1, base=0, i=0;

  //to take care of the whitespaces in the beginning
    while(A[i]==' ')
    {
      i++;
    }

    if(A[i]=='-' || A[i]=='+')
    {
      sign = (A[i]=='-')?-1:1;
      i++;
    }

    while(A[i]>='0' && A[i]<='9')
    {
      // INT_MAX = 214783647
      if(base>INT_MAX/10 || (base==INT_MAX/10 && A[i]-'0'>7))
      {
        if(sign==1)
        {
          return INT_MAX;
        }
        else
        {
          return INT_MIN;
        }
      }

      base = base * 10 + (A[i]-'0');

      i++;
    }

    return base*sign;
  }
};

int main()
{
  Solution s;

  string A="-7654D93 54F";

  int k = s.atoi(A);

  cout<<k;

  return 0;
}
