// https://www.interviewbit.com/problems/majority-element/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int majorityElement(const vector <int> &A)
  {
    for(int i=0;i<A.size();i++)
    {
      int cnt = 0;
      for(int j=0;j<A.size();j++)
      {
        if(A[i]==A[j])
        {
          cnt++;
        }
        else
        {
          cnt--;
        }
      }

      if(cnt>0)
      {
        return A[i];
      }
    }
  }
};

int main()
{

  vector <int> A = {1,2,3,4,4,6,4,4,4};

  Solution s;

  int k = s.majorityElement(A);

  cout<<k;

  return 0;
}
