// https://www.interviewbit.com/problems/max-non-negative-subarray/

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution
{
public:
  vector<int> maxNonNegativeSubArray(vector <int> &A)
  {
    long long int start = 0, end = 0, ansStart = 0, length = 0, ansLength = 0;

    long long int ansEnd = -1, sumTillNow = INT_MIN, maxTillNow = INT_MIN;

    int i=0;

    while(i<A.size())
    {
      if(A[i]>=0)
      {
        start = i;
        sumTillNow = 0;
        length = 0;

        while(A[i]>=0 && i<A.size())
        {
          sumTillNow += A[i];
          i++;
        }

        end = i-1;

        if( (sumTillNow > maxTillNow) || (sumTillNow == maxTillNow && end - start +1 > ansLength) )
        {
          ansStart = start;
          ansEnd = end;
          ansLength = end - start + 1;
          maxTillNow = sumTillNow;
        }
      }

      i++;

    }

    vector <int> B;

    for(int i = ansStart; i<=ansEnd; i++)
    {
      B.push_back(A[i]);
    }
    return B;
  }
};

int main()
{
  Solution s;

  vector <int> A = {2, 3, 5 , -1, 9, 1};
  vector <int> B = s.maxNonNegativeSubArray(A);

  for(int i=0;i<B.size();i++)
  {
    cout<<B[i]<<" ";
  }
}
