// https://www.interviewbit.com/courses/programming/topics/math/

#include <iostream>
#include <climits>

using namespace std;

class Solution
{
public:
  int reverse(int A)
  {
    int rev = 0, digit;

    while(A>0)
    {
      digit = A%10;
      if(rev>(INT_MAX/10) || (rev==(INT_MAX/10) && digit > (INT_MAX%10)))
      {
        return -1;
      }
      rev = rev * 10 + digit;
      A = A/10;
    }

    return rev;
  }

  bool isPalindrome(int A)
  {
    if(A<0)
    {
      return false;
    }

    return A == reverse(A);
  }
};

int main()
{
  Solution s;

  bool k = s.isPalindrome(1212);

  cout<<k;

  return 0;
}
