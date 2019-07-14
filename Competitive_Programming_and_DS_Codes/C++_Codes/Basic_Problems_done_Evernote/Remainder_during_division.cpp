// Refer to CCI V.3 Page 36

#include <iostream>

using namespace std;

int mod(int a, int b)
{
  int rem = 0;
  if(b<=0)
  {
    rem = -1;
    return rem;
  }
  else
  {
    int div = a/b;
    rem = a - (div  * b);
  }
  return rem;
}

int main()
{
  int a =6;
  int b = 2;

  int remainder = mod(a,b);

  cout<<remainder;
  return 0;
}

// Time Complexity = O(1)
