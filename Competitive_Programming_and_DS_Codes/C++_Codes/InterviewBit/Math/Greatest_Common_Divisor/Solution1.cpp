// https://www.interviewbit.com/problems/greatest-common-divisor/

#include <iostream>

using namespace std;

class Solution
{
public:
  int gcd(int a, int b)
  {
    int dividend, divisor;

    if(a>b)
    {
      dividend = a;
      divisor = b;
    }
    else
    {
      dividend = b;
      divisor = a;
    }

    while(divisor!=0)
    {
      int rem = dividend % divisor;
      dividend = divisor;
      divisor = rem;
    }

    return dividend;
  }
};

int main()
{
  Solution s;

  int k = s.gcd(15,12);

  cout<<k;


  return 0;
}
