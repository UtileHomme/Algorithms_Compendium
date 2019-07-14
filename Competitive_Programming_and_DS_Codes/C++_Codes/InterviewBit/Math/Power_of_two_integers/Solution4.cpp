// https://www.interviewbit.com/problems/power-of-two-integers/

#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

class Solution
{
public:

  int gcd(int a, int b)
  {
    while(b)
    {
      swap(a%=b, b);

    }
      return a;
  }
  bool isPower(int A)
  {
    if(A==1)
    {
      return true;
    }

    int g = 0;

    for (int i=2;i*i<=A ;i++)
    {
      if(A%i==0)
      {
        int e = 0;
        while(A%i==0)
        {
          A = A/i;
          ++e;
        }

        g = gcd(g,e);
      }

    }

    if(A>1)
    {
      g = 1;
    }

    return g>1;
  }
};

int main()
{
  Solution s;

  bool k = s.isPower(16);

  if(k)
  {
    cout<<"Power found";
  }
  else
  {
    cout<<"Power not found";
  }
  return 0;
}
