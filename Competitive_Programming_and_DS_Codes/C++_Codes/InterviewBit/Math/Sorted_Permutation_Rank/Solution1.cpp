// https://www.interviewbit.com/problems/sorted-permutation-rank/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

#define MOD 1000003

using namespace std;

class Solution
{
public:

  void initializeFactorials(int totalLen, vector <int> &fact)
  {
    long long int factorial = 1;

    //for index '0' since '0!' = 1
    fact.push_back(1);

    for(int i=1;i<totalLen; i++)
    {
      factorial = (factorial * i) % MOD;
      fact.push_back(factorial);
    }

    return;
  }

  int findRank(string S)
  {
    int charCnt[256];

    memset(charCnt, 0, sizeof(charCnt));

    for(int i=0;i<S.length();i++)
    {
      charCnt[int(S[i])]++;
    }

    vector <int> fact;

    initializeFactorials(S.length()+1, fact);

    long long int rank = 1;

    for(int i=0; i<S.length();i++)
    {
      int less = 0;

      //out of the 256 characters, find the number of characters less than
      //currentnly being iterated character
      for(int ch = 0; ch<S[i];ch++)
      {

        less += charCnt[ch];
      }

      rank = (rank + ((long long)fact[S.length()-i-1] * less)) % MOD;

      //remove the current character from the set

      charCnt[int(S[i])]--;
    }

    return rank;
  }
};

int main()
{
  Solution s;
  string k = "view";
  int l = s.findRank(k);

  cout<<l;

  return 0;
}
