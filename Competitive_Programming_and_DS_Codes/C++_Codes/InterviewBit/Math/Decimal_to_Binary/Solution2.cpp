// https://www.interviewbit.com/problems/binary-representation/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Solution
{
public:
  string decimaltobinary(int A)
  {
    string s;

    if(A==0)
    {
      return "0";
    }

    while(A>0)
    {
      int rem = A%2;
      s.push_back((char)('0' + rem));
      A = A/2;
    }

    reverse(s.begin(), s.end());


    return s;
  }
};

int main()
{

  Solution s;

  int n = 5;

  string k = s.decimaltobinary(n);

  cout<<k;

  return 0;
}
