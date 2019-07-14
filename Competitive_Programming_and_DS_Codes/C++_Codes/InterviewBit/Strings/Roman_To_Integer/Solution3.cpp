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
    int total=0, sum = 0;

    for(int i=A.size()-1; i>=0;i--)
    {
      int x = intValue(A[i]);

      //first iterated element
      if(sum==0)
      {
        sum = x;
      }
      //when the next element is same as the current element
      else if(intValue(A[i+1])==x)
      {
        sum += x;
      }
      //the next element is more than the current element
      //follow the subtractive property
      // Eg - IV

      else if(intValue(A[i+1])>x)
      {
        sum -= x;
      }
      //if the current element is 5 times the next element
      // Eg - CVI
      // the element before the current element will be larger than it
      else if((5 * intValue(A[i+1]))==x)
      {
        total = total + sum + x;
        sum = 0;
      }
      //this the case when A[i+1]<x
      //we need to add the current sum to the total and reset the value of sum as the current element
      else
      {
        total = total + sum;
        sum = intValue(A[i]);
      }
    }

    if(sum)
    {
      total = total + sum;
    }

    return total;
  }
};

int main()
{
  Solution s;

  string A = "MCMIV";

  int k = s.romanToInt(A);

  cout<<k;

  return 0;
}
