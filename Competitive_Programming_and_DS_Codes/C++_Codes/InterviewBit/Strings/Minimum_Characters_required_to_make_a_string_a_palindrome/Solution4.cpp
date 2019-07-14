// https://www.interviewbit.com/problems/minimum-characters-required-to-make-a-string-palindromic/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  int isPalindrome(string &A, int high)
  {
    int low = 0;
    while(low<=high)
    {
      if(A[low]!=A[high])
      {
        return 0;
      }
      else
      {
        low++;
        high--;
      }
    }

    return 1;
  }

  int solve(string A)
  {
    int n = A.length();

    for(int i=n-1;i>=0;i--)
    {
      if(isPalindrome(A,i))
      {
        return A.length()-i-1;
      }
    }
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
