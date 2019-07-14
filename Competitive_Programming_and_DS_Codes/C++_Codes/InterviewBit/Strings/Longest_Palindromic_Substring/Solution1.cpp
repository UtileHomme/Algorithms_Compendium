// https://www.interviewbit.com/problems/longest-palindromic-substring/

// https://www.geeksforgeeks.org/longest-palindromic-substring-set-2/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  string longestPalindrome(string A)
  {
    //maintains the max length of the current string
    int maxLen = 1;

    int start = 0;
    int len = A.length();

    int low, high;

    for(int i=1; i<len; i++)
    {
      low = i - 1;

      high = i;

      //we are checking for palindromes which are of "even" length
      while(low >= 0 && high < len && A[low]==A[high])
      {
        if(high - low + 1 > maxLen)
        {
          start = low;
          maxLen = high - low + 1;
        }

        --low;
        ++high;
      }

      low = i-1;
      high = i+1;

      //we are checking for palindromes which are of "odd" length
      while(low>=0 && high<len && A[low]==A[high])
      {
        if(high-low+1>maxLen)
        {
          start = low;
          maxLen = high - low + 1;
        }

        --low;
        ++high;
      }
    }

    //starting position of the substring with highest length
    int st = start;

    //ending position of the substring with highest length
    int end = start + maxLen-1;

    string k = "";

    for(int i=st; i<=end; i++)
    {
      k.push_back(A[i]);
    }

    return k;
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
