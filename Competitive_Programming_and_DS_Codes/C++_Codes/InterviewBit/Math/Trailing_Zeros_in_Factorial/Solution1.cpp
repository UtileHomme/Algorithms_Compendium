// https://www.interviewbit.com/problems/trailing-zeros-in-factorial/

#include <iostream>
#include <cmath>

using namespace std;

class Solution
{
public:
  int trailingZeroes(int A)
  {
      if(A==0 || A==1)
      {
        return 0;
      }

      int noOfIterations = A/5;

      int sum = 0;

      for(int i=0; i<noOfIterations;i++)
      {
        sum += (A / pow(5, i+1));
      }

      return sum;
  }
};

int main()
{
  int k = 25;

  Solution s;

  int cnt = s.trailingZeroes(k);

  cout<<cnt;
}
