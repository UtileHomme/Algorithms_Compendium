// https://www.interviewbit.com/problems/power-of-two-integers/

#include <iostream>
#include <cmath>

using namespace std;

class Solution
{
public:
  int isPower(int A)
  {
    if(A==1)
    {
      return 1;
    }

    for(int i=2;i<=sqrt(A);i++)
    {
      int x = A;

      while(x%i==0)
      {
        x = x / i;
      }

      if(x==1)
      {
        return 1;
      }
    }

    return 0;
  }
};

int main()
{
  Solution s;

  int k = s.isPower(16);

  if(k==1)
  {
    cout<<"Power found";
  }
  else
  {
    cout<<"Power not found";
  }
  return 0;
}
