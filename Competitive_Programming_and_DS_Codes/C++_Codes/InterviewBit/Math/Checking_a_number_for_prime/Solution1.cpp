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
    for(int i=2;i<=sqrt(A);i++)
    {
        if(A%i==0)
        {
            flag=0;
            break;
        }
        else
        {
            flag=1;
        }
    }

    if(flag==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

  }
};

int main()
{
  Solution s;
  int a = 3;

  int b = s.isPrime(a);
  cout<<b;
}
