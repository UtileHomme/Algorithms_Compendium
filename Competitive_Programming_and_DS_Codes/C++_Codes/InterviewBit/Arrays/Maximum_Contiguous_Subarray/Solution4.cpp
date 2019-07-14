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

    int start, end, s=0;
    for(int i=0;i<A.size();i++)
    {
      curr_sum = curr_sum + A[i];

      if(curr_sum>max_sum)
      {
        max_sum = curr_sum;
        start = s;
        end = i;
      }

      if(curr_sum<0)
      {
        curr_sum = 0;
        s = i+1;
      }
    }

    cout<<"The subarray is"<<endl;
    for(int k = start; k<=end; k++)
    {
      cout<<A[k]<<" ";
    }
    cout<<endl;

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
