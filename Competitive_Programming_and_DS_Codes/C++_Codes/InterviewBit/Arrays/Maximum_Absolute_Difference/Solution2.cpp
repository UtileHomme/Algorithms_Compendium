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
    vector <int> B;

    for(int i=0;i<A.size();i++)
    {
      int j = 0;

      while(j<=i)
      {
        int absDiff = abs(A[i] - A[j]) + abs(i-j);
        B.push_back(absDiff);
        j++;
      }
    }

    int max = -1;

    for(int i = 0; i<B.size();i++)
    {
      if(B[i]>max)
      {
        max = B[i];
      }
    }

    return max;

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
