// https://www.interviewbit.com/problems/maximum-unsorted-subarray/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  vector <int> subUnsort(vector <int> &A)
  {
    int n = A.size();

    int mini = A[n-1], maxi = A[0], mi_i, ma_i, flag=0;

    for(int i=n-2; i>=0; i--)
    {
      mini = min(mini,A[i]);

      if(A[i]!=mini)
      {
        flag=1;
        mi_i=i;
      }
    }

    for(int i=1; i<n; i++)
    {
      maxi = max(maxi,A[i]);
      if(A[i]!=maxi)
      {
        flag=1;
        ma_i = i;
      }
    }
    vector<int> v;
    if(flag==1)
    {
      v.push_back(mi_i);
      v.push_back(ma_i);
    }
    else
    {
      v.push_back(-1);
    }
    return v;


  }
};

int main()
{
  vector <int> A = {10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60};

  Solution s;

  vector <int> B = s.subUnsort(A);

  for(int i=0;i<B.size();i++)
  {
    cout<<B[i]<<" ";
  }
  return 0;
}
