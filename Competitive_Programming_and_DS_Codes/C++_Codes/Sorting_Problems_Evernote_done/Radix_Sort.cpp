// https://www.geeksforgeeks.org/?p=122061

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int getMax(int a[], int n)
{
  int max = a[0];

  for(int i=1;i<n;i++)
  {
    if(a[i]>max)
    {
      max = a[i];
    }
  }

  return max;
}

void countSort(int a[], int n, int exp)
{
  int output[n];
  int i, count[10] = {0};

  for(i=0;i<n;i++)
  {
    count[(a[i]/exp)%10]++;
  }

  for(i=1;i<10;i++)
  {
    count[i] = count[i] + count[i-1];
  }

  //Build the output array
  for(i=n-1; i>=0;i--)
  {
    output[count[(a[i]/exp)%10] - 1] = a[i];
    count[(a[i]/exp)%10]--;
  }

  // Copy the output array to a[], so that a[] contains
  // the sorted numbers according to current digit
  for(i=0;i<n;i++)
  {
    a[i] = output[i];
  }
}

void radixsort(int a[], int n)
{
  //Find the maximum number to know the number of digits
  int m = getMax(a, n);

  // Do counting sort for every digits

  for(int exp=1; m/exp>0; exp = exp*10)
  {
    countSort(a, n, exp);
  }
}

void print(int a[], int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
}

int main()
{
  int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
  int n = sizeof(arr)/sizeof(arr[0]);
  radixsort(arr, n);
  print(arr, n);
  return 0;
}
