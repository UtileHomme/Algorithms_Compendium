// https://www.geeksforgeeks.org/?p=7953

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int fact(int n)
{
  if(n==0)
  {
    return 1;
  }

  return n * fact(n-1);
}

void printRepeating(int a[], int size)
{
  int n = size-2;
  int sum = 0;
  int product = 1;

  for(int i=0;i<size;i++)
  {
    sum = sum + a[i];
    product = product * a[i];
  }

  int sumOfRepeatedElements = sum - ((n * (n+1))/2);
  int productofRepeatedElements = product/fact(n);

  int diffOfRepeatedElements = sqrt((sumOfRepeatedElements * sumOfRepeatedElements) - (4 * productofRepeatedElements));

  int x = (diffOfRepeatedElements + sumOfRepeatedElements)/2;
  int y = (sumOfRepeatedElements-diffOfRepeatedElements)/2;

  cout<<"Repeating elements are "<<x<<" "<<y;
}

int main()
{
  int arr[] = {4,2,4,5,2,3,1};

  int size = sizeof(arr)/sizeof(arr[0]);


  printRepeating(arr, size);

  return 0;
}
