// https://www.interviewbit.com/courses/programming/topics/math/

#include <iostream>
#include <climits>
#include <cmath>
#include <algorithm>

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

    string s = to_string(A);
    string s1 = s;

    reverse(s.begin(), s.end());

    return s==s1;
  }


};

int main()
{
  Solution s;

  bool k = s.isPalindrome(2147447412);

  cout<<k;

  return 0;
}
