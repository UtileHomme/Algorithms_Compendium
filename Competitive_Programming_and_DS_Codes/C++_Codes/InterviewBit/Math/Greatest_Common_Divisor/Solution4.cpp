// https://www.interviewbit.com/problems/greatest-common-divisor/

#include <iostream>

using namespace std;

class Solution
{
public:
  int gcd(int a, int b)
  {
    if(a==b)
    {
      return a;
    }

    while(a!=0 && b!=0)
    {
      if(a>b)
      {
        a = a % b;
      }
      else if(b>a)
      {
        b = b % a;
      }
    }

    if(a==0 && b!=0)
    {
      return b;
    }
    else if(a!=0 && b==0)
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
