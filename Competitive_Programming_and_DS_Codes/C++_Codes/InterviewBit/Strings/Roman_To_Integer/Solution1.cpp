// https://www.interviewbit.com/problems/roman-to-integer/

// https://www.geeksforgeeks.org/converting-roman-numerals-decimal-lying-1-3999/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  int intValue(char c)
  {
    if(c=='I')
    {
      return 1;
    }
    else if(c=='V')
    {
      return 5;
    }
    else if(c=='X')
    {
      return 10;
    }
    else if(c=='L')
    {
      return 50;
    }
    else if(c=='C')
    {
      return 100;
    }
    else if(c=='D')
    {
      return 500;
    }
    else if(c=='M')
    {
      return 1000;
    }

    return -1;
  }

  int romanToInt(string A)
  {
    int res = 0;

    for(int i=0;i<A.length();i++)
    {
      int s1 = intValue(A[i]);

      if(i+1 < A.length())
      {
        int s2 = intValue(A[i+1]);

        if(s1>=s2)
        {
          //the currently iterated character is more than the next character
          res = res + s1;
        }
        else
        {
          //the currently iterated character is less than the next character
          //so subtract the int value of current from next
          // eg - IV means 4 = 5(V) - 1(I)

          res = res + s2 - s1;

          // skip the next character as well
          i++;
        }
      }
      else
      {
        //to take care of the last character if it shows up
        res = res + s1;
        i++;
      }
    }

    return res;
  }
};

int main()
{
  Solution s;

  string A = "XIV";

  int k = s.romanToInt(A);

  cout<<k;

  return 0;
}
