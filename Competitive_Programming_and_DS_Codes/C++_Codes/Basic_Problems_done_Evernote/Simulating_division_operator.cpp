// Refer to CCI V.4 (page 36)

#include <iostream>

using namespace std;

int division(int a, int b)
{
  int sum = b;
  int count = 0;

  while(sum<=a)
  {
    sum += b;
    count++;
  }

  return count;

}

int main()
{
  int a = 32;

  int b = 5;

  int div = division(a,b);

  cout<<div;
  return 0;
}

// Time Complexity = O(a/b)
