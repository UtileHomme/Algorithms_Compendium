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
  string commonPrefixUtil(string str1, string str2)
  {
    string result;

    int n1=str1.length(), n2=str2.length();

    for(int i=0,j=0; i<=n1-1 && j<=n2-1; i++,j++)
    {
      if(str1[i]!=str2[j])
      {
        break;
      }

      result.push_back(str1[i]);
    }

    return result;
  }

  string longestCommonPrefix(vector <string> &A, int low, int high)
  {
    if(low==high)
    {
      return (A[low]);
    }

    if(low<high)
    {
      int mid = low + (high-low)/2;

      string str1 = longestCommonPrefix(A, low, mid);
      string str2 = longestCommonPrefix(A, mid+1, high);

      return commonPrefixUtil(str1, str2);
    }
  }
};

int main()
{
  vector <string> A = {"geeksforgeeks", "geeks",
                    "geek", "geezer"};

  Solution s;

  string prefix = s.longestCommonPrefix(A, 0, A.size()-1);

  cout<<prefix;

  return 0;
}
