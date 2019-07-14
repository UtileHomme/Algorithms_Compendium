// https://www.interviewbit.com/problems/grid-unique-paths/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int uniquePaths(int A, int B)
  {
    vector <vector <int>> grid(A, vector <int> (B,0));

    if(A==0 || B==0)
    {
      return 1;
    }

    grid[0][0] = 1;

    for(int i=0;i<A;i++)
    {
      for(int j=0;j<B;j++)
      {
        if(i-1>=0)
        {
          grid[i][j] += grid[i-1][j];
        }
        if(j-1>=0)
        {
          grid[i][j] += grid[i][j-1];
        }
      }
    }

    return grid[A-1][B-1];
  }
};

int main()
{
  Solution s;
  int A = 2;
  int B = 3;
  int k = s.uniquePaths(A,B);

  cout<<k;
  return 0;
}
