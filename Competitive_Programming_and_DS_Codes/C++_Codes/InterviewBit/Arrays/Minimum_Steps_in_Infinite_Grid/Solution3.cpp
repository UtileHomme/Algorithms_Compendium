// https://www.interviewbit.com/problems/min-steps-in-infinite-grid/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution
{
public:

  int coverPoints(vector <int>&A, vector<int>&B)
  {
    if(A.size()<=1)
    {
      return 0;
    }

    int steps = 0;

    if(A.size()==B.size())
    {
      for(int i=1;i<A.size();i++)
      {
      int dA = abs(A[i]- A[i-1]);
      int dB = abs(B[i] - B[i-1]);

      int diagonal_d = dA > dB ? dB: dA;
      int straight_d = dA > dB ? abs(dA - diagonal_d) : abs(dB - diagonal_d);

      steps = steps + diagonal_d + straight_d;
      }

      return steps;
    }


    return 0;
  }
};

int main()
{
  Solution s;

  vector <int> A = {0,0,1,2};
  vector <int> B = {0,1,2,2};

  int k = s.coverPoints(A,B);

  cout<<"Number of steps for the given order are "<<k;

  return 0;

}
