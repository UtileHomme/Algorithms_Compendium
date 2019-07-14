// https://www.interviewbit.com/problems/sorted-permutation-rank/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

#define MOD 1000003

using namespace std;

class Solution
{
public:

  int fact(int n)
  {
    if(n==0)
    {
      return 1;
    }
    else if(n==1)
    {
      return 1;
    }
    else
    {
      return ((n%1000003)*fact(n-1)%1000003)%1000003;
    }
  }
  int findRank(string A)
  {
    vector <int> ans;
    vector <int>::iterator i;

    string::iterator it, itt;

    long long int len = A.length();

    int count;
    for(it=A.begin(); it!=A.end();it++)
    {
      count = 0;

      for(itt = it + 1; itt!=A.end(); itt++)
      {
        if(*itt<*it)
        {
          count++;
        }
      }

      ans.push_back(count);
    }

    count = 0;
    for(int k=0;k<A.length();k++)
    {
      count = ((count)%1000003 + ((ans[k]%1000003) * (fact(len-k-1)%1000003)%1000003))%1000003;
    }

    return count+1;

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
