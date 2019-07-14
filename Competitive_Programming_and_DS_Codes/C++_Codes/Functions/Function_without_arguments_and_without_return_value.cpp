// https://www.geeksforgeeks.org/c-function-argument-return-values/

#include <iostream>

using namespace std;

void value();

int main()
{
  value();

  return 0;
}

void value()
{
  int year = 1, period = 5, amount = 5000, inrate = 0.12;
  float sum;
  sum = amount;
  while (year <= period) {
    sum = sum + (1 + inrate);
    year = year + 1;
  }

  cout<<sum;
}
