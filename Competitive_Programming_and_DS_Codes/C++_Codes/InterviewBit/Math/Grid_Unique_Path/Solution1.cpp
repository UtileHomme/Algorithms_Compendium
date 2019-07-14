// https://www.interviewbit.com/problems/grid-unique-paths/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int uniquePaths(int m, int n)
  {
    long long ans = 1;
    for(int i=n; i<(m+n-1); i++)
    {
      ans *= i;
      ans /= (i-n+1);
    }

    return (int)ans;
  }
};

int main()
{
  Solution s;
  int A = 3;
  int B = 3;
  int k = s.uniquePaths(A,B);

  cout<<k;
  return 0;
}
