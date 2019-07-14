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
    char a[33] = {0};


    int i;
    for(i=0;i<32;i++)
    {
      if(A%2==1)
      {
        a[31-i] = '1';
      }
      else
      {
        a[31-i] = '0';
      }

      A = A/2;

      if(A==0)
      {
        break;
      }
    }

    //"a+31-i" gives the starting position from where the character has to be copied
    string s(a + 31 - i);
    return s;
  }
};

int main()
{

  Solution s;

  int n = 13;

  string k = s.decimaltobinary(n);

  cout<<k;

  return 0;
}
