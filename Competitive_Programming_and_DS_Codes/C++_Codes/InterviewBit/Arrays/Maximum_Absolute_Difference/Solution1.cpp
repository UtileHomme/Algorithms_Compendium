// https://www.interviewbit.com/problems/maximum-absolute-difference/

// https://www.geeksforgeeks.org/maximum-absolute-difference-value-index-sums/


#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

class Solution
{
public:
  int maxAbsDiff(vector <int> &A)
  {
    int maxFinal = INT_MIN;

    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for(int i=0;i<A.size();i++)
    {
      max1 = max(max1, A[i] + i);
      min1 = min(min1, A[i] + i);

      max2 = max(max2, A[i] - i);
      min2 = min(min2, A[i] - i);

    }


    maxFinal = max(maxFinal, max2 - min2);

    maxFinal = max(maxFinal, max1 - min1);

    return maxFinal;

  }
};

int main()
{

  vector <int> A = {1,3,-1};

  Solution s;

  int max = s.maxAbsDiff(A);

  cout<<max;
  return 0;
}

// Time Complexity = O(n)
