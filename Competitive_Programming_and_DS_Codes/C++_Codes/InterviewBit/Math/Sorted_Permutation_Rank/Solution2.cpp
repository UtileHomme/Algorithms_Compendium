// https://www.interviewbit.com/problems/sorted-permutation-rank/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

#define MOD 1000003

using namespace std;

class Solution
{
public:

  int fact(int val)
  {
    int s = 1;

    if(val==1 || val==0)
    {
      return 1;
    }
    else
    {
      while(val>0)
      {
        s = (s * val) % 1000003;
        val--;
      }
    }

    return s;
  }

  int findRank(string S)
  {
    long long int sum = 0;
    for(int i=0;i<S.length();i++)
    {
      long long int cnt = 0;

      for(int j=i+1; j<S.length();j++)
      {
        if(S[j]<S[i])
        {
          cnt++;
        }
      }
      sum = sum + (fact(S.length()-i-1)*cnt) % 100003;
    }

    return (sum+1)%1000003;
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
