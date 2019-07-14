// https://www.geeksforgeeks.org/?p=1176

//Brian Kernighan's iterative solution

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int countSetBits(int n)
{
  int cnt = 0;

  while(n!=0)
  {
    n = n&(n-1);
    cnt++;
  }

  return cnt;
}

int main()
{
  int i = 23;

  cout<<countSetBits(i);
  return 0;
}
