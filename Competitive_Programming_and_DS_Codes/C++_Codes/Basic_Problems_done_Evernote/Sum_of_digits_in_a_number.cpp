// Reference CCI V.10 (page number 37)

#include <iostream>

using namespace std;

int sumOfDigits(int n)
{
  int sum = 0;

  while(n!=0)
  {
    sum = sum + n%10;
    n = n/10;
  }

  return sum;
}

int main()
{
  int k = 234;

  int sum = sumOfDigits(k);

  cout<<sum;
  return 0;
}
