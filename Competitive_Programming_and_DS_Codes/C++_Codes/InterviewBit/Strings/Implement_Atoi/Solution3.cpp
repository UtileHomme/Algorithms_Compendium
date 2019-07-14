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
    int i= 0, flag = 0;

    int n = A.length();

    long ans =0;

    //we can use "isspace" for checking this as well
    // http://www.cplusplus.com/reference/cctype/isspace/
    while(i<n && A[i]==' ')
    {
      i++;
    }

    if(A[i]=='-')
    {
      flag=1;
      i++;
    }
    else if(A[i]=='+')
    {
      flag =0;
      i++;
    }

    //isdigit checks whether a character is a number or something else
    // http://www.cplusplus.com/reference/cctype/isdigit/

    //if the first character after checking for spaces and symbol
    //is not a number, "atoi" should return 0
    if(!isdigit(A[i]))
    {
      return 0;
    }

    while(i<n)
    {
      if(!isdigit(A[i]))
      {
        return ans;
      }

      int t = A[i]-'0';

      //for negative numbers
      if(flag==1)
      {
        ans = ans*10-t;
        if(ans<INT_MIN)
        {
          return INT_MIN;
        }
      }
      //for positive numbers
      else
      {
        ans = ans * 10 + t;
        if(ans>INT_MAX)
        {
          return INT_MAX;
        }
      }

      i++;
    }

    return ans;
  }
};

int main()
{
  Solution s;

  string A=" +765434324232D93 54F";

  int k = s.atoi(A);

  cout<<k;

  return 0;
}
