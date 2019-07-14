// https://www.interviewbit.com/problems/grid-unique-paths/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int uniquePaths(int m, int n)
  {
    //we are in the first row or the first column
    if(m==1 || n==1)
    {
      return 1;
    }

    
    return uniquePaths(m-1,n) + uniquePaths(m, n-1);
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
