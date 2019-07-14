// https://www.geeksforgeeks.org/?p=28980

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void primeFactors(int n)
{
  //print the number of 2s that divide n
  while(n%2==0)
  {
    cout<<2<<" ";
    n = n/2;
  }

  // n must be odd at this point. So we skip one element
  // we iterate for 3 (find the number of 3s that divide n), then iterate for 5 and so on
  for(int i=3; i<=sqrt(n); i = i+2)
  {
    while(n%i==0)
    {
      cout<<i<<" ";
      n = n/i;
    }
  }

  if(n>2)
  {
    cout<<n;
  }
}

int main()
{
  int n = 237;
  primeFactors(n);
  return 0;
}
