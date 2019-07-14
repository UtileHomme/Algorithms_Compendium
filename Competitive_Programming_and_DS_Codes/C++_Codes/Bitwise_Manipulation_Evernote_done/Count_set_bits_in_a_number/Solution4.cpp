// https://www.geeksforgeeks.org/?p=1176

//Brian Kernighan's recursive solution

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int countSetBits(int n)
{
  if (n == 0)
       return 0;
   else
       return 1 + countSetBits(n & (n - 1));
}

int main()
{
  int i = 23;

  cout<<countSetBits(i);
  return 0;
}
