// https://www.interviewbit.com/problems/add-binary-strings/

// https://www.geeksforgeeks.org/program-to-add-two-binary-strings/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  string addBinary(string A, string B)
  {
    string res = "";

    // carry
    int s=0;

    int i = A.size()-1, j=B.size()-1;

    //s==1 is when we have the carry as 1 and we have gone beyond the size of both strings
    while(i>=0 || j>=0 || s==1)
    {
      //if size of first string is more than or equal to 0, add the char at the position
      if(i>=0)
      {
        s = s + (A[i]-'0');
      }
      else
      {
        s = s + 0;
      }

      //if size of second string is more than or equal to 0, add the char at the position
      if(j>=0)
      {
        s = s + (B[j]-'0');
      }
      else
      {
        s = s + 0;
      }

      res = to_string(s%2) + res;

      s = s/2;

      i--;
      j--;
    }

    return res;
  }
};

int main()
{
  string A = "111";
  string B = "01";

  Solution s;

  string k = s.addBinary(A,B);

  cout<<k;

  return 0;
}
