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
    int sum=0;

    int len = A.size();

    int i=0;
    while(i<A.size())
    {
      if(A[i]=='M')
      {
        sum = sum + 1000;
        i = i + 1;
      }
      else if(A[i]=='I' && i+1<len && A[i+1]=='V')
      {
        sum = sum + 4;
        i = i + 2;
      }
      else if(A[i] =='I' && i+1<len && A[i+1]=='X')
      {
        sum = sum + 9;
        i = i + 2;
      }
      else if(A[i]=='I')
      {
        sum = sum + 1;
        i = i + 1;
      }
      else if(A[i]=='X' && i+1<len && A[i+1]=='L')
      {
        sum = sum + 40;
        i = i+2;
      }
      else if(A[i]=='X' && i+1<len && A[i+1]=='C')
      {
        sum=sum+90;
        i=i+2;
      }
      else if(A[i]=='X')
      {
        sum=sum+10;
        i=i+1;
      }
      else if(A[i]=='C' && i+1<len && A[i+1]=='D')
      {
        sum=sum+400;
        i=i+2;
      }
      else if(A[i]=='C' && i+1<len && A[i+1]=='M')
      {
        sum=sum+900;
        i=i+2;
      }
      else if(A[i]=='C')
      {
        sum=sum+100;
        i=i+1;
      }
      else if(A[i]=='V')
      {
        sum=sum+5;
        i=i+1;
      }
      else if(A[i]=='L')
      {
        sum=sum+50;
        i=i+1;
      }
      else if(A[i]=='D')
      {
        sum=sum+500;
        i=i+1;
      }
    }

    return sum;
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
