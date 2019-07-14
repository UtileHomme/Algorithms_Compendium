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

    int max = -1;

    int i = A.size()-1;

    int j = 0;

    while(j<=i && i!=0)
    {
      int absDiff = abs(A[i]-A[j]) + abs(i-j);

      if(absDiff>max)
      {
        max = absDiff;
      }

      if(i==j)
      {
        i--;
        j=0;
      }
      else
      {
        j++;
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
