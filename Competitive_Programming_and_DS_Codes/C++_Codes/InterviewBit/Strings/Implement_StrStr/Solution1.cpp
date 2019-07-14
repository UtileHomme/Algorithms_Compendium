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
    int M = B.length();
    int N = A.length();

    if(M==0 || N==0)
    {
      return -1;
    }

    int j;

    for(int i=0;i<=N-M;i++)
    {
      for(j=0;j<M;j++)
      {
        if(A[i+j]!=B[j])
        {
          break;
        }
      }

      if(j==M)
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

  string A= "ABCAABAAC";
  string B = "AABA";

  int k = s.strStr(A,B);

  cout<<k;
  return 0;
}
