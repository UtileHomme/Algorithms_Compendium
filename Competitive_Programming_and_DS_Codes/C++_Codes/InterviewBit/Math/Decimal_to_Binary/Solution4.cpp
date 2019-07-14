// https://www.interviewbit.com/problems/binary-representation/


#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Solution
{
public:
  void decimaltobinary(int A)
  {
    string s="";

    if(A>0)
    {
      decimaltobinary(A/2);
      cout<<to_string(A%2);
    }

  }
};

int main()
{

  Solution s;

  int n = 22;

  s.decimaltobinary(n);


  return 0;
}
