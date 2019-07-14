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
    if(A==0)
    {
      string k = to_string(0);
      return k;
    }

    string s;

    while(A>0)
    {
      int rem = A%2;
      string k = to_string(rem);
      s.append(k);
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
