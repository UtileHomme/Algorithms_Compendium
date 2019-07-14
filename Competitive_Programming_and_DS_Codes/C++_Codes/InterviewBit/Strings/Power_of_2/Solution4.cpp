// https://www.interviewbit.com/problems/power-of-2/

// https://www.geeksforgeeks.org/given-huge-number-check-power-two/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  int power(string A)
  {
    string s1, s2;

    while(1)
    {
      s1 = "";

      if(A.size()==1 && A[0]=='2')
      {
        return 1;
      }

      int num=0;
      int i = 0;

      int len = A.size();

      while(i<len)
      {
        num = num * 10 + (A[i]-'0');

        if(num>=2)
        {
          s1 = s1 + to_string(num/2);
          num = num % 2;
        }
        else if(s1.size())
        {
          s1 = s1+'0';
        }
        i++;
      }

      if(num>0)
      {
        return 0;
      }

      A = s1;
    }
  }
};

int main()
{
  Solution s;

  string A = "127";

  int k = s.power(A);

  cout<<k;

  return 0;
}
