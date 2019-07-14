// https://www.interviewbit.com/problems/implement-strstr/

// https://www.geeksforgeeks.org/searching-for-patterns-set-1-naive-pattern-searching/

// https://www.geeksforgeeks.org/searching-for-patterns-set-2-kmp-algorithm/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int strStr(const string A, const string B)
  {
    if(A.size()==0 || B.size()==0)
    {
      return - 1;
    }

    int pos = 0, n = A.size(), m=B.size();

    for(int i=0;i<=n-m;i++)
    {
      pos = 0;

      while(A[i+pos]==B[pos] && pos<m)
      {
        pos++;
      }

      if(pos==m)
      {
        return i;
      }
    }
    return -1;
  }
};

int main()
{
  Solution s;

  string A= "AABACAA";
  string B = "BAC";

  int k = s.strStr(A,B);

  cout<<k;
  return 0;
}
