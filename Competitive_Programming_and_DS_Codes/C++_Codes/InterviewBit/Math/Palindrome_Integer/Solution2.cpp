// https://www.interviewbit.com/courses/programming/topics/math/

#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

class Solution
{
public:
  bool isPalindrome(int A)
  {
    if(A<0)
    {
      return false;
    }

    long int temp = 0, temp2 = A;

    while(A!=0)
    {
      temp = temp * 10 + A%10;
      A = A/10;
    }

    if(temp==temp2)
    {
      return true;
    }
    else
    {
      return false;
    }
  }


};

int main()
{
  Solution s;

  bool k = s.isPalindrome(2147447412);

  cout<<k;

  return 0;
}
