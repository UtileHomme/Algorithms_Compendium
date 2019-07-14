// https://www.geeksforgeeks.org/?p=1176

// Recursive solution

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int countSetBits(unsigned int n)
{
  if(n==0)
  {
    return 0;
  }

  return (n%2) + countSetBits(n/2);
}

int main()
{
  int i = 23;

  cout<<countSetBits(i);
  return 0;
}
