// https://www.interviewbit.com/problems/longest-common-prefix/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  string commonPrefix(string s1, string s2)
  {
    string res;

    int n1=s1.length(), n2=s2.length();

    for(int i=0,j=0; i<=n1-1 && j<=n2-1; i++, j++)
    {
      if(s1[i]!=s2[j])
      {
        break;
      }

      // if a match is found, keep on pushing the character
      res.push_back(s1[i]);
    }

    return res;
  }

  string longestCommonPrefix(vector <string> &A)
  {
    vector <string> B;

    //pick up the first element from the list
    //This will act as the first prefix
    string prefix = A[0];

    //calculate the prefix for each string
    for(int i=1;i<=A.size()-1;i++)
    {
      prefix = commonPrefix(prefix, A[i]);
    }

    return prefix;
  }
};

int main()
{
  vector <string> A = {"apple", "ape", "april"};

  Solution s;

  string prefix = s.longestCommonPrefix(A);

  cout<<prefix;

  return 0;
}
