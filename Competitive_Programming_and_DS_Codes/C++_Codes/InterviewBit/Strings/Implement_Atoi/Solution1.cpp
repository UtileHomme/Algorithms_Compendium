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
    int sign = 1;

    int i = 0;

    //take care of the signs first
    if(A[0]=='-')
    {
      i++;
      sign = -1;
    }
    else if(A[0]=='+')
    {
      i++;
      sign = 1;
    }

    long long int temp = 0;

    while(A[i]!=' ' && i<A.length())
    {
      if(A[i]>='0' && A[i]<='9')
      {
        int k = A[i]-'0';

        temp = temp * 10 + k;

        if(temp>INT_MAX)
        {
          if(sign==1)
          {
            return INT_MAX;
          }
          else if(sign==-1)
          {
            return INT_MIN;
          }
        }
      }
      else
      {
        break;
      }
      i++;
    }

    temp = temp * sign;

    return temp;
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
