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

  while(n!=1)
  {
    //if the number is not a multiple of 2, it is not a power of 2
    if(n%2!=0)
    {
      return 0;
    }

    n = n/2;
  }

  return 1;
}

int main()
{
  int k=42;

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
