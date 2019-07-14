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

  int absDiff(int i, int j, vector <int> &A)
  {
    return abs(A[i] - A[j]) + abs(i-j);
  }

  int maxAbsDiff(vector <int> &A)
  {
    int max = 0;

    for(int i=0;i<A.size();i++)
    {
      for(int j=i;j<A.size();j++)
      {
        if(absDiff(i,j,A)>max)
        {
          max = absDiff(i,j,A);
        }
      }
    }
    return max;
  }
};

int main()
{

  vector <int> A = { -70, -64, -6, -56, 64,
                  61, -57, 16, 48, -98 };

  Solution s;

  int max = s.maxAbsDiff(A);

  cout<<max;
  return 0;
}
