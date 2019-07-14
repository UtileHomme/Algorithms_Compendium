// https://www.interviewbit.com/problems/max-sum-contiguous-subarray/

// https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int maxSubArray(const vector <int> &A)
  {
    int curr_sum = 0, max_sum = 0;

    for(int i=0;i<A.size();i++)
    {
      if(A[i]+ curr_sum >0)
      {
        curr_sum = curr_sum + A[i];
      }
      else
      {
        curr_sum = 0;
      }

      max_sum = max(max_sum , curr_sum);
    }

    if(max_sum==0)
    {
      int max = A[0];
      for(int i=1;i<A.size();i++)
      {
        if(A[i]>max)
        {
          max = A[i];
        }
      }

      return max;
    }

    return max_sum;
  }
};

int main()
{
  vector <int> A = {-2, -3, -4, -1, -2, -1, -5, -3};

  Solution s;

  int sum = s.maxSubArray(A);

  cout<<sum;
}
