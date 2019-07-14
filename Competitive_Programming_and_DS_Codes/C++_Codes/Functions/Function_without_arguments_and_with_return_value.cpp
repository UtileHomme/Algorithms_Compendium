// https://www.geeksforgeeks.org/c-function-argument-return-values/

#include <iostream>
#include <cmath>

using namespace std;

int sum();

int main()
{
  int num;
  num = sum();
  cout<<num;

  return 0;
}

int sum()
{
  int a = 50, b = 80, sum;

  sum = sqrt(a) + sqrt(b);

  return sum;
}
