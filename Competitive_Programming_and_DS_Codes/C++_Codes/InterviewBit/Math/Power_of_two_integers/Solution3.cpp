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

    double val;

    int temp;

    for(int i=2; i*i<=A;i++)
    {
      val = log(A)/log(i);

      temp = (int) val;

      float fractpart, intpart;

      //returns the fractional part
      //syntax = modff(float arg, float *iptr)
      fractpart = modff(val, &intpart);

      if(fractpart == 0)
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
