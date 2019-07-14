// https://www.geeksforgeeks.org/binary-insertion-sort/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int binarySearch(int a[], int item, int low, int high)
{
  if(low>=high)
  {
    return (item>a[low])? low+1 : low;
  }

  int mid = low + (high - low)/2;

  if(item==a[mid])
  {
    return mid+1;
  }

  if(item>a[mid])
  {
    return binarySearch(a, item, mid+1, high);
  }

  return binarySearch(a, item, low, mid-1);

}

void binaryInsertionSort(int a[], int n)
{
  int i, loc, j, key;

  for(i=1;i<n;i++)
  {
    j = i-1;
    key = a[i];

    loc = binarySearch(a, key, 0, j);

    while(j>=loc)
    {
      a[j+1] = a[j];
      j--;
    }

    a[j+1] = key;
  }
}

int main()
{
  int a[] = {37,23,17,12,72};

  int n = sizeof(a)/sizeof(a[0]);

  binaryInsertionSort(a, n);

  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
