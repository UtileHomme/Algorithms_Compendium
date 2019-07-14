// https://www.interviewbit.com/problems/longest-common-prefix/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  string longestCommonPrefix(vector <string> &A)
  {
    if(A.size()==0)
    {
      return "";
    }

    string res = "";

    //traverse through the length of the first string
    //"i" tracks the character bring checked
    for(int i=0;i<A[0].length();i++)
    {
      bool isQualified = true;

      //for traversing through each string in the vector
      for(int j=1;j<A.size();j++)
      {
        if(i>=A[j].length() || A[j][i]!=A[0][i])
        {
          isQualified = false;
          break;
        }
      }

      if(!isQualified)
      {
        break;
      }

      res.push_back(A[0][i]);
    }

    return res;
  }
};

int main()
{
  vector <string> A = {"geeksforgeeks", "geeks",
                    "geek", "geezer"};

  Solution s;

  string prefix = s.longestCommonPrefix(A);

  cout<<prefix;

  return 0;
}
