// https://www.interviewbit.com/problems/diffk/

// Given a sorted array

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int diffPossible(vector <int> &A, int B)
  {
    int i,j;

    int n = A.size();

    for(i=0;i<n-1;i++)
    {
      for(j=n-1; j>i;j--)
      {
        if(A[j]-A[i]==B)
        {
          return 1;
        }
        else if(A[j]-A[i]<B)
        {
          break;
        }
      }
    }

    return 0;

  }
};

int main()
{
  Solution s;

  vector <int> A = {1,3,6,8,9};

  int B = 3;

  int k = s.diffPossible(A, B);

  cout<<k;

  return 0;
}
