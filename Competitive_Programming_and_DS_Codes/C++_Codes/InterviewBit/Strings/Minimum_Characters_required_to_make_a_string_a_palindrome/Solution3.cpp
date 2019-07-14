// https://www.interviewbit.com/problems/minimum-characters-required-to-make-a-string-palindromic/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int solve(string A)
  {
    int n = A.length();

    int palen, cnt=0;

    for(int i=0;i<n;i++)
    {
      //assuming we have a palindrome from the beginning itself
      palen = 1;

      // start from the beginning and go till half the current string
      for(int j=0;j<=(n-i)/2;j++)
      {
        if(A[j]==A[n-i-1])
        {
          continue;
        }
        //if the characters don't match, the assumed string wasn't a palindrome
        //we need to stop considering the last character of the string
        else
        {
          palen=0;
          break;
        }
      }

      if(palen==0)
      {
        cnt++;
      }
      //if we have traversed the entire string and the palen = 1, this means the entire string
      //was a palindrome from the start
      else
      {
        break;
      }
    }
    return cnt;
  }
};

int main()
{
  Solution s;

  string A = "AACECAAAA";

  int k = s.solve(A);

  cout<<k;
  return 0;
}
