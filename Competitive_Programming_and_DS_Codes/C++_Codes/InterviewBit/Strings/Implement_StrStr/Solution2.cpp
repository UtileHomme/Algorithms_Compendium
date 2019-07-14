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
    if(B[0]=='\0')
    {
      return -1;
    }

    for(int i=0; A[i]!='\0';i++)
    {
      bool isMatched = true;
      for(int j=0; B[j]!='\0'; j++)
      {
        if(A[i+j]==0)
        {
          return -1;
        }

        if(A[i+j]!=B[j])
        {
          isMatched = false;
          break;
        }
      }

      if(isMatched)
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

  string A= "";
  string B = "B";

  int k = s.strStr(A,B);

  cout<<k;
  return 0;
}
