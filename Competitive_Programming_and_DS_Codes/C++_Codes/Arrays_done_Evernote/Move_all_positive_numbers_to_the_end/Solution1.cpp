// https://www.geeksforgeeks.org/rearrange-positive-and-negative-numbers/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void RearrangePosNeg(int a[], int n)
{
  int key, j;

  for(int i=1; i<n;i++)
  {
    key = a[i];

    if(key>0)
    {
      continue;
    }

    j = i-1;
    while(j>=0 && a[j]>0)
    {
      a[j+1] = a[j];
      j = j-1;
    }

    a[j+1] = key;
  }
}

int main()
{
  int a[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};

  int n = sizeof(a)/sizeof(a[0]);

  RearrangePosNeg(a, n);

  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
