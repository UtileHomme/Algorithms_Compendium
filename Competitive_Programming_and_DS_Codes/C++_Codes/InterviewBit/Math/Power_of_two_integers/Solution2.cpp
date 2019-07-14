// https://www.interviewbit.com/problems/power-of-two-integers/

#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

class Solution
{
public:
  bool isPower(int A)
  {
    if(A==1)
    {
      return true;
    }

    for(int base = 2; base<A && base < INT_MAX/base; base++)
    {
      int temp = base;

      while(temp<=A && temp < INT_MAX/base)
      {
        temp = temp * base;
        if(temp==A)
        {
          return true;
        }
      }
    }
    return false;
  }
};

int main()
{
  Solution s;

  bool k = s.isPower(15);

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
