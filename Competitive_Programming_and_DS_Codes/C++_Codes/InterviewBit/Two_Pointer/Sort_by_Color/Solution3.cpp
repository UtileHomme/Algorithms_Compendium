// https://www.interviewbit.com/problems/sort-by-color/

// https://www.geeksforgeeks.org/sort-array-0s-1s-2s-simple-counting/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  void sortColors(vector <int> &A)
  {
    int n = A.size();

    int k = 0;

    for(int i=k; i<n; i++)
    {
      if(A[i]==0)
      {
        swap(A[k], A[i]);
        k++;
      }
    }

    for(int i=k; i<n; i++)
    {
      if(A[i]==1)
      {
        swap(A[k], A[i]);
        k++;
      }
    }

  }
};

int main()
{
  Solution s;

  vector <int> A = {0,1,2,0,2,1,1,0,1};

  s.sortColors(A);

  for(int i=0;i<A.size();i++)
  {
    cout<<A[i]<<" ";
  }
}
