// https://www.interviewbit.com/problems/sorted-permutation-rank/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

#define MOD 1000003

using namespace std;

class Solution
{
public:

  int findRank(string A)
  {
    bool cc[260]={false};

    long int i,j,k = A.size();

    for(i=0;i<k;i++)
    {
      cc[int(A[i])]=true;
    }

    long int fact[260];

    fact[0]=1;
    for(i=1;i<=k+1;i++)
    {
      fact[i] = (fact[i-1]*i)%1000003;
    }

    long int res = 0;

    for(i=0;i<k;i++)
    {
      long int count=0;
      for(j=1;j<=A[i];j++)
      {
        if(cc[j]==true)
        {
          count++;
        }
      }

      cc[int(A[i])]=false;

      res = (res + (count-1)*fact[k-1-i])%1000003;
    }

    return (int)((res+1)%1000003);
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
