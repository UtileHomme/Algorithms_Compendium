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
    int total=0;

    for(int i=0;i<A.size();i++)
    {
      int j = intValue(A[i]);
      int k=0;

      if(i<A.size()-1)
      {
        k = intValue(A[i+1]);
      }

      //if the next element is more than the current
      //follow the subtractive rule
      if(i<A.size()-1 && k>j)
      {
        total = total - j;
        total = total + k;
        i++;
      }

      else
      {
        total = total + j;
      }
    }

    return total;
  }
};

int main()
{
  Solution s;

  string A = "XXXVII";

  int k = s.romanToInt(A);

  cout<<k;

  return 0;
}
