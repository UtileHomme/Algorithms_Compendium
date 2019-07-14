// https://www.interviewbit.com/problems/minimum-characters-required-to-make-a-string-palindromic/

// https://www.geeksforgeeks.org/?p=140191

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  vector <int> computeLPSArray(string str)
  {
    int M = str.length();

    vector <int> lps(M);

    int len = 0;

    lps[0] = 0;

    int i=1;

    while(i<M)
    {
      if(str[i]==str[len])
      {
        len++;
        lps[i]=len;
        i++;
      }
      else
      {
        if(len!=0)
        {
          len = lps[len-1];
        }
        else
        {
          lps[i]=0;
          i++;
        }
      }
    }

    return lps;
  }

  int solve(string str)
  {
    string revstr = str;
    reverse(revstr.begin(), revstr.end());

    string concat = str + '$' + revstr;

    vector <int> lps = computeLPSArray(concat);

    // lps.back is the largest suffice of the reversed string that
    // matches the prefix of the the original string , hence a palindrome
    return (str.length() - lps.back());
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
