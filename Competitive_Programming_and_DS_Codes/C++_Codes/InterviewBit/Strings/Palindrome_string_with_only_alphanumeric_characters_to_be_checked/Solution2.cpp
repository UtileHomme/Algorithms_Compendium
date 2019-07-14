// https://www.interviewbit.com/problems/palindrome-string/

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int isPalindrome(string A)
  {
    int i=0, j = A.size()-1;

    while(i<j)
    {
      while(i<j && !isalnum(A[i]))
      {
        i++;
      }
      while(i<j && !isalnum(A[j]))
      {
        j--;
      }

      if(toupper(A[i])!=toupper(A[j]))
      {
        return 0;
      }

      i++;
      j--;
    }

    return 1;
  }

};

int main()
{
  Solution s;

  string A = "race a car";
  int k = s.isPalindrome(A);

  cout<<k;
  return 0;
}
