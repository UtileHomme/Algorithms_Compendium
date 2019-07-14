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
    string s;

    int i = 0, j;

    while(A[i]!='\0')
    {
      if(isalpha(A[i]) || isdigit(A[i]))
      {
        s.push_back(A[i]);

      }
      i++;
  }
      j = s.length();


      if(j==0 || j==1)
      {
        return 1;
      }

      for(i=0;i<=j/2;i++)
      {
        //comparing lower/upper character with upper/lower characters
        if(s[i]!=s[j-i-1] && s[i]!=s[j-i-1]+32 && s[i]!=s[j-i-1]-32)
        {
          return 0;
        }
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
