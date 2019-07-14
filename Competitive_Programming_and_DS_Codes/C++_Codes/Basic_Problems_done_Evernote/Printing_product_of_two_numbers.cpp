// Refer to CCI V.1 (page 35)

#include <iostream>

using namespace std;

int product(int a, int b)
{
  int sum = 0;

  for(int i=0;i<b;i++)
  {
    sum += a;
  }

  return sum;
}

int main()
{
  int a = 2;

  int b = 5;

  int prod = product(a,b);

  cout<<prod;
  return 0;
}

// Time Complexity = O(b)
