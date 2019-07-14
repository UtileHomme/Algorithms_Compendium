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
    sort(A.begin(), A.end());

    int n = A.size();

    int cnt = 0;

    for(int i=0; i<n-1; i++)
    {
      int k = i+2;

      for(int j = i+1; j<n; j++)
      {
        while(k<n && A[i]+A[j]>A[k])
        {
          k++;
        }

        cnt = cnt + (k-j-1);

        if(cnt>=1000000007)
        {
          cnt = cnt % 1000000007;
        }
      }
    }

    return cnt;
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
