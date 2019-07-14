// https://www.interviewbit.com/problems/max-sum-contiguous-subarray/

// https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int maxSubArray(const vector <int> &A)
  {
    int curr_sum = 0, max_sum = INT_MIN;

    for(int i=0;i<A.size();i++)
    {
      curr_sum = curr_sum + A[i];

      max_sum = max(max_sum, curr_sum);

      if(curr_sum<0)
      {
        curr_sum = 0;
      }
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
