// https://www.geeksforgeeks.org/?p=10982

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void rearrange(int a[], int n)
{
  int i = -1;

  // put all negative numbers in the beginning and all positive numbers in the end
  //The idea is to consider "0" as the pivot and divide the array around it
  for(int j=0;j<n;j++)
  {
    if(a[j]<0)
    {
      i++;
      swap(a[i], a[j]);
    }
  }

  // Now all positive numbers are at end and negative numbers
  // at the beginning of array. Initialize indexes for starting
  // point of positive and negative numbers to be swapped
  int pos = i+1, neg=0;

  // Increment the negative index by 2 and positive index by 1,
  // i.e., swap every alternate negative number with next
  // positive number
  while(pos<n && neg<pos && a[neg]<0)
  {
    swap(a[pos], a[neg]);
    neg = neg+2;
    pos++;
  }
}

int main()
{
  int a[] = {-1, 2, -3, 4, 5, 6, -7, 8 , 9};

  int n = sizeof(a)/sizeof(a[0]);

  rearrange(a, n);

  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
}
