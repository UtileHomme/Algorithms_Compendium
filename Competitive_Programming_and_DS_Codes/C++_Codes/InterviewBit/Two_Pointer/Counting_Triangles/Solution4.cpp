// https://www.interviewbit.com/problems/counting-triangles/

// https://www.geeksforgeeks.org/find-number-of-triangles-possible/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int countTriangles(vector <int> &A)
  {
    int n=A.size(),ans=0;

    if (n==0)
    {
      return ans;
    }

    for(int i=0;i<n-1;i++)
    {
      for(int j=i+1;j<n;j++)
      {
        for(int k=j+1;k<n;k++)
        {
          if(A[i]+A[j]>A[k])
          {
            ans = ans + 1;
          }
        }
      }
    }
    return ans;
  }
};

int main()
{
  vector <int> A = {10, 21, 22, 100, 101, 200, 300};

  Solution s;

  int k = s.countTriangles(A);

  cout<<k;
  return 0;
}
