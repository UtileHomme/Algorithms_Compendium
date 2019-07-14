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

      int sum = 0;

      while(A/5>0)
      {
        sum += (A/5);
        A = A/5;
      }

      return sum;
  }
};

int main()
{
  int k = 15;

  Solution s;

  int cnt = s.trailingZeroes(k);

  cout<<cnt;
}
