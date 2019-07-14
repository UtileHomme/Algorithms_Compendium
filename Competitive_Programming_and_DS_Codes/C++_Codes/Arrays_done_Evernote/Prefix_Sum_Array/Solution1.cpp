// https://www.geeksforgeeks.org/prefix-sum-array-implementation-applications-competitive-programming/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void fillPrefixSum(int a[], int n, int prefixSum[])
{
  prefixSum[0] = a[0];

  for(int i=1;i<n;i++)
  {
    prefixSum[i] = prefixSum[i-1] + a[i];
  }
}

int main()
{
  int a[] = {10,4,16,20};
  int n = sizeof(a)/sizeof(a[0]);

  int prefixSum[n];

  fillPrefixSum(a, n, prefixSum);

  for(int i=0; i<n;i++)
  {
    cout<<prefixSum[i]<<" ";
  }
  return 0;
}
