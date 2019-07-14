// https://www.geeksforgeeks.org/program-to-find-whether-a-no-is-power-of-two/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPowerofTwo(int n)
{
  return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
  int k=31;
  int l= 64;

  if(isPowerofTwo(k))
  {
    cout<<"Yes";
  }
  else
  {
    cout<<"No";
  }

  cout<<endl;
  
  if(isPowerofTwo(l))
  {
    cout<<"Yes";
  }
  else
  {
    cout<<"No";
  }

  return 0;
}
