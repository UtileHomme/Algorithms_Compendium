// https://www.interviewbit.com/problems/longest-palindromic-substring/

// https://www.geeksforgeeks.org/longest-palindromic-substring-set-2/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  //matching the characters
  string expandAroundCenter(string s, int c1, int c2)
  {
    int l=c1, r=c2;

    int n = s.length();

    while(l>=0 && r<=n-1 && s[l]==s[r])
    {
      l--;
      r++;
    }

    return s.substr(l+1, r-l-1);
  }

  string longestPalindrome(string s)
  {
    int len = s.length();

    if(len==0)
    {
      return "";
    }

    string longest = s.substr(0,1);

    for(int i=0;i<len-1;i++)
    {
      //for odd length palindrome
      string p1 = expandAroundCenter(s, i, i);

      if(p1.length()>longest.length())
      {
        longest = p1;
      }

      //for even length palindrome
      string p2 = expandAroundCenter(s, i, i+1);

      if(p2.length()>longest.length())
      {
        longest = p2;
      }

    }

    return longest;
  }
};

int main()
{

  Solution s;

  string k = "rorgeeksskeegfor";

  string l = s.longestPalindrome(k);

  cout<<l;

  return 0;
}
