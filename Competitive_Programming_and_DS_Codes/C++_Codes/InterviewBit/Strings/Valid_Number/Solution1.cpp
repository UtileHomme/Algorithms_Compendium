// https://www.interviewbit.com/problems/valid-number/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  bool isNumber(const string &s)
  {
    //to convert "string" into character array ending in "\0'"
    const char *c = s.c_str();

    int i=0;

    //skip the whitespaces in the beginning
    while(c[i]==' ')
    {
      i++;
    }

    if(c[i]=='\0')
    {
      return false;
    }

    if(c[i]=='+' || c[i]=='-')
    {
      i++;
    }

    int num_digits=0, num_points=0;

    //this checks whether there is a digit and a decimal point
    //there should be number after the decimal point in which case
    // c[i-1] should have a number after this loop
    for(; (c[i]<='9' && c[i]>='0') || c[i]=='.'; i++)
    {
      if(c[i]=='.')
      {
        num_points++;
      }
      else
      {
        num_digits++;
      }
    }

    //if there are more than one decimal points
    //if the number of digits are less than one
    //if the element just before the current "i" is a decimal
    if(num_points>1 || num_digits<1 || c[i-1]=='.')
    {
      return false;
    }

    //check for 'e' and move forward
    if(s[i]=='e')
    {
      i++;

      // after "e" check for "+" or "-"
      if(s[i]=='+' || s[i]=='-')
      {
        i++;
      }

      num_digits = 0;

      //check whether after "e" there are any digits
      while(s[i]>='0' && s[i]<='9')
      {
        i++;
        num_digits++;
      }

      //if there are no digits after "e", return false
      if(num_digits<1)
      {
        return false;
      }
    }

    while(s[i]==' ')
    {
      i++;
    }

    return s[i] == '\0';

  }

};

int main()
{
  Solution s;

  string A = "+0.1e -10";

  bool k = s.isNumber(A);

  cout<<k;
}
