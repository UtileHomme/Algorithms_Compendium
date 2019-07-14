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
    vector <string> row(nRows,"");

    int curr_row=0, flag=0;

    string ans="";

    if(nRows==1)
    {
      return s;
    }

    for(int i=0;i<s.length();i++)
    {
      // At first row, we set flag to 0 to go down the rows (curr_row goes increasing)
      if(curr_row==0)
      {
        flag=0;
        row[curr_row] += s[i];
        curr_row++;
      }

      // till we reach last row
      else if(curr_row<nRows-1 && flag==0)
      {
        row[curr_row] += s[i];
        curr_row++;
      }

       // once we reach last row, flag is set to 1 and we start going up the rows (curr_row goes decreasing)
      else if(curr_row==nRows-1)
      {
        flag=1;
        row[curr_row] += s[i];
        curr_row--;
      }

      else if(curr_row>0 && flag==1)
      {
        row[curr_row] += s[i];
        curr_row--;
      }
    }

    for(int i=0; i<nRows;i++)
    {
      ans = ans + row[i];
    }

    return ans;
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
