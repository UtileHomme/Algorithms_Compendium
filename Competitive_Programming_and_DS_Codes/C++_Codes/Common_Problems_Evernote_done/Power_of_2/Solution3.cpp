// https://www.geeksforgeeks.org/program-to-find-whether-a-no-is-power-of-two/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPowerofTwo(int n)
{
  if(n==0)
  {
    return 0;
  }

  if(n&(n-1))
  {
    return 0;
  }

  return 1;
}

int main()
{
  int k=128;

  if(isPowerofTwo(k))
  {
    cout<<"Yes";
  }
  else
  {
    cout<<"No";
  }

  return 0;
}
