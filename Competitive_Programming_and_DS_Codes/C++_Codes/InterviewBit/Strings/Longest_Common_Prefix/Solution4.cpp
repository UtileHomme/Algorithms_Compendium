// https://www.interviewbit.com/problems/longest-common-prefix/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  int findMinLength(vector <string> &A)
  {
    int min = INT_MAX;

    for(int i=0;i<=A.size()-1;i++)
    {
      if(A[i].length()<min)
      {
        min = A[i].length();
      }
    }

    return min;
  }

  bool allContainsPrefix(vector <string> &A, string str, int start, int end)
  {
    for(int i=0;i<=A.size()-1;i++)
    {
      for(int j=start; j<=end;j++)
      {
        if(A[i][j]!=str[j])
        {
          return false;
        }
      }
    }
    return true;
  }

  string longestCommonPrefix(vector <string> &A)
  {
    int minlen = findMinLength(A);


    string prefix;

    int low =0, high = minlen-1;

    while(low<=high)
    {
      int mid = low + (high-low)/2;

      // this will check whether the first string from left to mid match the corresponding
      // indices for all other strings
      if(allContainsPrefix(A, A[0], low, mid))
      {
        prefix = prefix + A[0].substr(low, mid-low+1);

        low = mid + 1;
      }
      else
      {
        high = mid - 1;
      }
    }

    return prefix;
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
