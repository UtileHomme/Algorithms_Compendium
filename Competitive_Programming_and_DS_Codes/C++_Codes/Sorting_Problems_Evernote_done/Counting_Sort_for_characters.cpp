// https://www.geeksforgeeks.org/?p=115936

#include <iostream>
#include <bits/stdc++.h>
#define RANGE 255

using namespace std;

void countSort(char a[])
{
  //create an array for storing the final output
  char output[strlen(a)];

  //create a count array to store count of individual
  //characters and initialize count array as 0
  int count[RANGE+1];

  memset(count, 0, sizeof(count));

  int n = strlen(a);

  //Store count of each character
  for(int i=0;i<n;i++)
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
  for(int i=0;i<n; i++)
  {
    output[count[int(a[i])]-1] = a[i];
    --count[int(a[i])];
  }

  // copy everything to the new output array
  for(int i=0;i<n;i++)
  {
    a[i] = output[i];
  }
}

int main()
{
  char a[] = {"geeksforgeeks"};

  countSort(a);

  cout<<a;
  return 0;
}
