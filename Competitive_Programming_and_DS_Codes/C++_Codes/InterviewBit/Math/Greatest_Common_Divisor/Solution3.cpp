// https://www.interviewbit.com/problems/greatest-common-divisor/

#include <iostream>

using namespace std;

class Solution
{
public:
  int gcd(int a, int b)
  {
    if(b!=0)
    {
      gcd(b, a%b);
    }
    else
    {
      return a;
    }
  }
};

int main()
{
  Solution s;

  int k = s.gcd(15,12);

  cout<<k;


  return 0;
}
