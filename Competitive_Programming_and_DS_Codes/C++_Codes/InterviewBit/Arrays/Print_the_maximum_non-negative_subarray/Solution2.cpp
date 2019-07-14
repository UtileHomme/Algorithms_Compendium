// https://www.interviewbit.com/problems/max-non-negative-subarray/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  vector<int> maxNonNegativeSubArray(vector <int> &A)
  {
    int size = A.size();

    long long max_sum = 0;

    long long cur_sum = 0;

    int max_left = -1;

    int max_right = -1;

    int cur_left = 0;
    int cur_right = 0;

    while(cur_right<size)
    {
      if(A[cur_right]<0)
      {
        cur_left = cur_right + 1;
        cur_sum = 0;
      }
      else
      {
        cur_sum += (long long)A[cur_right];

        if(cur_sum>max_sum)
        {
          max_sum = cur_sum;
          max_left = cur_left;
          max_right = cur_right + 1;
        }
        else if(cur_sum == max_sum)
        {
          if((cur_right - cur_left + 1) > (max_right - max_left))
          {
            max_left = cur_left;
            max_right = cur_right + 1;
          }
        }

      }

      cur_right++;
    }

    vector <int> B;

    if(max_left == -1 || max_right == -1)
    {
      return B;
    }

    for(int i = max_left; i<max_right;i++)
    {
      B.push_back(A[i]);
    }

    return B;
  }
};

int main()
{
  Solution s;

  vector <int> A = {0, 0 , -1, 0};
  vector <int> B = s.maxNonNegativeSubArray(A);

  for(int i=0;i<B.size();i++)
  {
    cout<<B[i]<<" ";
  }
}
