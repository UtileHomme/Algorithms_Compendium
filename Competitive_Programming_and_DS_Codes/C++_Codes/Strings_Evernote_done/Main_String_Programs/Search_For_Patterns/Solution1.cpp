// https://www.geeksforgeeks.org/?p=11871

// Naive Pattern Searching

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  void search(string pat, string text)
  {
    int M = pat.length();
    int N = text.length();


    for(int i=0;i<=N-M;i++)
    {
      int j;
      for(j=0;j<M;j++)
      {
        if(text[i+j]!=pat[j])
        {
          break;
        }

      }

      if(j==M)
      {
        cout<<"Pattern found at index "<<i<<endl;
      }
    }

  }
};

int main()
{
  string text = "AABAACAADAABAAABAA";
  string pat = "AABA";

  Solution s;

  s.search(pat, text);
  return 0;
}
