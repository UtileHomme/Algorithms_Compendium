// https://www.geeksforgeeks.org/?p=1176

// Iterative solution

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int countSetBits(unsigned int n)
{
  int cnt = 0;
  while(n!=0)
  {
    //for an even number "n & 1" will be "1"
    //for an odd number "n & 1" will be "0"

    if(n%2==1)
    {
      cnt = cnt+1;
    }

    n = n/2;
  }

  return cnt;
}

int main()
{
  int i = 11;

  cout<<countSetBits(i);
  return 0;
}
