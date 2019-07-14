// https://www.interviewbit.com/problems/max-distance/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int maxGap(const vector <int> &A)
  {
    if(A.size()==0)
    {
      return -1;
    }
    if(A.size()==1)
    {
      return 0;
    }

    int curr_max = 0;

    for(int i=0;i<A.size();i++)
    {
      for(int j=i+1;j<A.size();j++)
      {
        if(A[i]<=A[j])
        {
          int max = j-i;

          if(max>curr_max)
          {
            curr_max = max;
          }
        }
      }
    }

    return curr_max;
  }
};

int main()
{
  Solution s;

  vector <int> num = {3,4,5,2};

  int k = s.maxGap(num);

  cout<<k;
  return 0;
}
