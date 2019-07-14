// https://www.interviewbit.com/problems/grid-unique-paths/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:


  int uniquePaths(int m, int n)
  {

    vector <int> grid(n,1);

    for(int i=1; i<m; i++)
    {
      for(int j=1; j<n; j++)
      {
        grid[j] = grid[j] + grid[j-1];
      }
    }

    return grid[n-1];
  }
};

int main()
{
  Solution s;
  int A = 4;
  int B = 3;

  int k = s.uniquePaths(A,B);

  cout<<k;
  return 0;
}
