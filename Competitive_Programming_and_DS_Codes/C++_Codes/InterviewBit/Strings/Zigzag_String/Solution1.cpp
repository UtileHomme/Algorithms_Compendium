// https://www.interviewbit.com/problems/zigzag-string/

// https://www.geeksforgeeks.org/print-concatenation-of-zig-zag-string-form-in-n-rows/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  string convert(string s, int nRows)
  {
    if(nRows<=1)
    {
      return s;
    }

    const int len = (int)s.length();

    string *str = new string[nRows];

    int row = 0;
    bool down = true;

    for(int i=0; i<len;i++)
    {
      str[row].push_back(s[i]);

      if(row==0)
      {
        down = true;
      }
      else if(row==nRows-1)
      {
        down = false;
      }

      if(down==true)
      {
        row++;
      }
      else
      {
        row--;
      }

    }

    s.clear();

    for(int j=0; j<nRows; j++)
    {
      s.append(str[j]);
    }

    return s;
  }
};

int main()
{
  string s = "PAYPALISHIRING";
  int rows = 4;

  Solution k;

  string A = k.convert(s,rows);

  cout<<A;

  return 0;
}
