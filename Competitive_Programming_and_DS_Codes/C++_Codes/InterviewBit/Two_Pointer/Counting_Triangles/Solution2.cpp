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

    long long cnt = 0;

    long long i, left, right;

    for(i=0;i<n;i++)
    {
      left = 0;
      right = i-1;

      while(left<right)
      {
        if(A[left]+A[right]>A[i])
        {
          cnt = cnt + (right-left);
          right--;
        }
        else
        {
          left++;
        }
      }
    }

    long long k = pow(10,9);

     cnt = cnt % (k + 7);

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
