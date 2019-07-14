// https://www.interviewbit.com/problems/greatest-common-divisor/

#include <iostream>

using namespace std;

class Solution
{
public:
  int gcd(int a, int b)
  {
    if(a<b)
    {
      swap(a,b);
    }

    if(b==0)
    {
      return a;
    }

    return gcd(a%b, b);
  }
};

int main()
{
  Solution s;

  int k = s.gcd(15,12);

  cout<<k;


  return 0;
}
