// https://www.interviewbit.com/problems/longest-common-prefix/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  //this will return the matching prefix for the current two strings
  string compareStrings(string &a, string &b)
  {
    string c = "";
    int n = a.size(), m = b.size(), i=0, j=0;

    while(i<n && j<m)
    {
      if(a[i]==b[j])
      {
        c = c + a[i];
        i++;
        j++;
      }
      else
      {
        break;
      }
    }

    return c;
  }

  string longestCommonPrefix(vector <string> &A)
  {
    if(A.size()==0)
    {
      return "";
    }

    string b = A[0];

    for(string a:A)
    {
      b = compareStrings(b,a);
    }

    return b;
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
