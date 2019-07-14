// https://www.interviewbit.com/problems/greatest-common-divisor/

#include <iostream>

using namespace std;

class Solution
{
public:
  int gcd(int a, int b)
  {
    if(a==0)
    {
      return b;
    }
    else if(b==0)
    {
      return a;
    }

    if(a<b)
    {
      a = a+b;
      b = a-b;
      a = a-b;
    }

    if(a%b==0)
    {
      return b;
    }

    return gcd(b, a%b);
  }
};

int main()
{
  Solution s;

  int k = s.gcd(15,12);

  cout<<k;


  return 0;
}
