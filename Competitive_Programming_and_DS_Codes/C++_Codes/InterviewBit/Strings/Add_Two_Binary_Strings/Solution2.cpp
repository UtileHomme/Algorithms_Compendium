// https://www.interviewbit.com/problems/add-binary-strings/

// https://www.geeksforgeeks.org/program-to-add-two-binary-strings/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  string addBinary(string A, string B)
  {
    string ans="";

    int car = 0;
    int n = A.length(), m = B.length();

    if(n==0 && m==0)
    {
      return ans;
    }

    n--, m--;

    while(n>=0 || m>=0)
    {
      char a='0', b = '0';

      if(n>=0)
      {
        a = A[n];
      }
      if(m>=0)
      {
        b = B[m];
      }

      if(a=='1' && b=='1')
      {
        if(car==0)
        {
          ans = "0" + ans;
          car = 1;
        }
        else
        {
          ans = "1"+ans;
          car = 1;
        }
      }

      else if(a=='1' || b=='1')
      {
        if(car==1)
        {
          ans = "0" + ans;
          car = 1;
        }
        else
        {
          ans = "1" + ans;
          car = 0;
        }
      }

      //if a="0" and b="0"
      else
      {
        if(car==1)
        {
          ans = "1" + ans;
        }
        else
        {
          ans = "0" + ans;
        }

        car=0;
      }
      n--;
      m--;
    }

    if(car!=0)
    {
      ans = "1" + ans;
    }

    return ans;
  }
};

int main()
{
  string A = "111";
  string B = "01";

  Solution s;

  string k = s.addBinary(A,B);

  cout<<k;

  return 0;
}
