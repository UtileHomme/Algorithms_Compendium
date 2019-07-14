// https://www.interviewbit.com/courses/programming/topics/math/

#include <iostream>
#include <climits>
#include <vector>
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

    vector <int> B, C;

    int g, c = 0;

    while(A!=0)
    {
      g = A%10;
      B.push_back(g);

      //for inserting an element at a particular position.. here at the front
      C.insert(C.begin(), g);
      A = A/10;
      c++;
    }

    for(int i=0;i<c;i++)
    {
      if(B[i]!=C[i])
      {
        return false;
      }
    }

      return true;
  }


};

int main()
{
  Solution s;

  bool k = s.isPalindrome(2147447412);

  cout<<k;

  return 0;
}
