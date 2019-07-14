// https://www.interviewbit.com/problems/minimum-characters-required-to-make-a-string-palindromic/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  bool isPalindrome(string A)
  {
    int len = A.length();

    int start = 0;
    int end = len - 1;

    while(start<=end)
    {
      if(A[start]!=A[end])
      {
        return false;
      }

      start++;
      end--;
    }

    return true;
  }

  int solve(string A)
  {
    int cnt = 0;
    int flag = 0;

    while(A.length()>0)
    {
      //if the present string is a palindrome, we have the count
      if(isPalindrome(A))
      {
        flag = 1;
        break;
      }
      //we haven't reach a palindrome point yet
      else
      {
        cnt++;
      }

      //erase the last element, till the a palindrome point is found
      A.erase(A.begin() + A.length() - 1);
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
