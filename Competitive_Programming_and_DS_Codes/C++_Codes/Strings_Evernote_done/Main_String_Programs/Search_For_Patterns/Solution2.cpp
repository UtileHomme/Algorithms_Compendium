// https://www.geeksforgeeks.org/searching-for-patterns-set-2-kmp-algorithm/

// Knuth Morris Pratt (KMP) Pattern Matching

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  void computeLPSArray(string pat, int M, vector<int> lps)
  {
    // length of the previous longest prefix suffix
    int len = 0;

    lps[0] = 0;;

    int i = 1;

    while(i<M)
    {
      if(pat[i]==pat[len])
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
  }

  void KMPsearch(string pat, string text)
  {
    int M = pat.length();
    int N = text.length();

    vector <int> lps(M);

    // index for text
    int i=0;

    // index for pattern
    int j=0;

    while(i<N)
    {
      if(pat[j]==text[i])
      {
        i++;
        j++;
      }

      if(j==M)
      {
        cout<<"Found pattern at index "<<i-j<<endl;
        j = lps[j-1];
      }
      else if(i<N && pat[j]!=text[i])
      {
        if(j!=0)
        {
          j = lps[j-1];
        }
        else
        {
          i = i+1;
        }
      }
    }

  }
};

int main()
{
  string text = "AABAACAADAABAAABAA";
  string pat = "AABA";

  Solution s;

  s.KMPsearch(pat, text);
  return 0;
}
