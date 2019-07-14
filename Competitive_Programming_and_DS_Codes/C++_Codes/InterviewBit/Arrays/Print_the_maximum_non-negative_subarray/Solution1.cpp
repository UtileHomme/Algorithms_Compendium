// https://www.interviewbit.com/problems/max-non-negative-subarray/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  vector<int> maxNonNegativeSubArray(vector <int> &A)
  {
    vector <int> B;

    int low = 0, end = 0;

    long long max_sum = -1;

    int low1 = 0, end1 =0;

    for(int i=0;i<A.size();i++)
    {
      long long sum = 0;

      if(A[i]>0)
      {
        end = i;
      }

      if(A[i]<0 || i == A.size()-1)
      {

        for(int k = low ; k <= end; k++)
        {
          sum += A[k];
        }

        if(sum > max_sum)
        {
          max_sum = sum;
          low1 = low;
          end1 = end;
        }

        low = i + 1;
        end = i + 1;
      }
    }

    for(int l = low1; l<=end1; l++)
    {
      B.push_back(A[l]);
    }

    int allNegative = 1;

    for(int i=0;i<A.size();i++)
    {
      if(A[i]>0)
      {
        allNegative = 0;
      }
    }

    if(allNegative==1)
    {
      return {};
    }

    if(A.size()==1)
    {
      B.clear();
      B.push_back(A[0]);
      return B;
    }

    return B;
  }
};

int main()
{
  Solution s;

  vector <int> A = {2,3,4,-6, -1, 5,22, 2};
  vector <int> B = s.maxNonNegativeSubArray(A);

  for(int i=0;i<B.size();i++)
  {
    cout<<B[i]<<" ";
  }
}
