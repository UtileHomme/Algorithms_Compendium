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

      long long n = 5;

      int sum = 0;

      while(A/n!=0)
      {
        sum += A/n;
        n = n*5;
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
