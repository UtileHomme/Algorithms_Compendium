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
    vector <int> ans;

    int n = A.size();

    int i =0, j = n-1;

    while(i<n-1 && A[i]<=A[i+1])
    {
      i++;
    }

    while(j>0 && A[j]>=A[j-1])
    {
      j--;
    }

    if(i==n-1)
    {
      ans.push_back(-1);
      return ans;
    }

    int mn = A[i+1], mx = A[i+1];

    for(int k=i;k<=j;k++)
    {
      mx = max(mx, A[k]);
      mn = min(mn, A[k]);
    }

    int l=0, r = n-1;

    while(A[l]<=mn && l<=i)
    {
      l++;
    }

    while(A[r]>=mx && r>=j)
    {
      r--;
    }

    ans.push_back(l);
    ans.push_back(r);

    return ans;

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
