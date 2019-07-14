// https://www.geeksforgeeks.org/?p=115936

#include <iostream>
#include <bits/stdc++.h>
#define RANGE 255

using namespace std;

void countSort(int a[], int size)
{
  //create an array for storing the final output
  char output[size];

  //create a count array to store count of individual
  //characters and initialize count array as 0
  int count[RANGE+1];

  memset(count, 0, sizeof(count));

  //Store count of each character
  for(int i=0;i<size;i++)
  {
    ++count[int(a[i])];
  }

  // Change count[i] so that count[i] now contains the actual position
  // of this character in output array
  for(int i=1; i<=RANGE;i++)
  {
    count[i] += count[i-1];
  }

  // Build the output character array
  for(int i=0;i<size; i++)
  {
    output[count[int(a[i])]-1] = a[i];
    --count[int(a[i])];
  }

  // copy everything to the new output array
  for(int i=0;i<size;i++)
  {
    a[i] = output[i];
  }
}

int main()
{
  int a[] = {4,3,1,1,5,6,1};

  int size = sizeof(a)/sizeof(a[0]);

  countSort(a,size);

  for(int i=0;i<size;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
