// https://www.interviewbit.com/problems/largest-coprime-divisor/

#include <iostream>
#include <cmath>

using namespace std;

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

class Solution
{
public:
  int cpFact(int A, int B)
  {
    while(gcd(A,B)!=1)
    {
      A = A / gcd(A,B);
    }

    return A;
  }
};

int main()
{
  Solution s;

  int A = 30;
  int B = 12;

  int k = s.cpFact(A, B);

  cout<<k;

  return 0;
}
