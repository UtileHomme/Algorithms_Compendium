// https://www.geeksforgeeks.org/move-ve-elements-end-order-extra-space-allowed/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void segregateElements(int a[], int n)
{
  int temp[n];

  int j = 0;

  //store all positive integers first in temp array
  for(int i=0;i<n;i++)
  {
    if(a[i]>=0)
    {
      temp[j++] = a[i];
    }
  }

  //this means we have either all positive integers or all negative integers
  if(j==0 || j==n)
  {
    return;
  }

  //next store all negative integers in temp array
  for(int i=0;i<n;i++)
  {
    if(a[i]<0)
    {
      temp[j++] = a[i];
    }
  }

  // copy the elements from "temp" to "a"
  memcpy(a, temp, sizeof(temp));
}

int main()
{
  int a[] = {1,-1,3, 2, -7, -5, 11, 6};

  int n = sizeof(a)/sizeof(a[0]);

  segregateElements(a, n);

  for(int i=0; i<n; i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
