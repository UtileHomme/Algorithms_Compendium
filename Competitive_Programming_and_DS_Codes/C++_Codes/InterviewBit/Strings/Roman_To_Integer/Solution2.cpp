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
    switch (c) {
      case 'I':   return 1;
      case 'V':   return 5;
      case 'X':   return 10;
      case 'L':   return 50;
      case 'C':   return 100;
      case 'D':   return 500;
      case 'M':   return 1000;
      default:    return 0;
    }
  }

  int romanToInt(string A)
  {
    int res = 0;

    int size = A.size();

    for(int i=0;i<size;i++)
    {
      // does the lesser value precede the higher value

      if(i<(size-1) && intValue(A[i])<intValue(A[i+1]))
      {
        res = res - intValue(A[i]);
      }
      else
      {
        res = res + intValue(A[i]);
      }
    }

    return res;
  }
};

int main()
{
  Solution s;

  string A = "MDLXVI";

  int k = s.romanToInt(A);

  cout<<k;

  return 0;
}
