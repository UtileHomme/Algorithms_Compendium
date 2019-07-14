// https://www.interviewbit.com/problems/verify-prime/

#include <iostream>
#include <math.h>

using namespace std;

class Solution
{
public:

  int isPrime(int A)
  {

    int flag = 0;

    int ans = 1;
    if(A<2)
    {
      return 0;
    }
    for(int i=2;i<A;i++)
    {
      if(A%i==0)
      {
        ans = 0;
        break;
      }
    }

    return ans;
  }
};

int main()
{
  Solution s;
  int a = 3467;

  int b = s.isPrime(a);
  cout<<b;
}
