// https://www.geeksforgeeks.org/calculate-xor-1-n/


#include <iostream>

using namespace std;

int computeXOR(const int n)
{
  // n % 4
  switch(n&3)
  {
    case 0: return n;

    case 1: return 1;

    case 2: return n+1;

    case 3: return 0;
  }
}

int main()
{
  int n = 5;

  int k = computeXOR(n);

  cout<<k;
  return 0;
}

/*
Explanation

- When we do XOR of numbers, we get "0" as XOR value just before a multiple of 4
- this keeps repeated before every multiple of 4

https://imgur.com/a/WFeJ37i
*/
