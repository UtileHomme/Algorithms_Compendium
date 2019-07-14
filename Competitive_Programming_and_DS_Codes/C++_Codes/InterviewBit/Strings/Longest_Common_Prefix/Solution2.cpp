// https://www.interviewbit.com/problems/longest-common-prefix/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  //to find the string with the minimum length
  //since the common prefix cannot be more than that
  int findMinLength(vector <string> &A)
  {
    int min = A[0].length();

    for(int i=1;i<A.size();i++)
    {
      if(A[i].length()<min)
      {
        min = A[i].length();
      }
    }

    return min;
  }

  string longestCommonPrefix(vector <string> &A)
  {
    string B;

    int minlen = findMinLength(A);

    char current;

    for(int i=0;i<minlen;i++)
    {
      //in the first string pick the 'ith' character
      current = A[0][i];

      for(int j=1;j<A.size();j++)
      {
        //if the current character doesn't match with even one
        //of the given strings, return the existing prefix
        if(current!=A[j][i])
        {
          return B;
        }
      }
      B.push_back(current);
    }
    return B;
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
