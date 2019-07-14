// https://www.interviewbit.com/problems/max-sum-contiguous-subarray/

// https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int maxSubArray(const vector <int> &A)
  {
    int curr_sum = A[0], max_sum = 0;

    for(int i=1;i<A.size();i++)
    {
      curr_sum = max(curr_sum+A[i], A[i]);
      max_sum = max(curr_sum, max_sum);
    }

    return max_sum;
  }
};

int main()
{
  vector <int> A = {-2, -3, 4, -1, -2, 1, 5, -3};

  Solution s;

  int sum = s.maxSubArray(A);

  cout<<sum;
}
