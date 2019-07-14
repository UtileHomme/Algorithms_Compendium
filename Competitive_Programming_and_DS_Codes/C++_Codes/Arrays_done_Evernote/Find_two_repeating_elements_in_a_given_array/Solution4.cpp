// https://www.geeksforgeeks.org/?p=7953

#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void printRepeating(int a[], int size)
{
  cout<<"Repeated elements "<<endl;
  for(int i=0;i<size;i++)
  {
    if(a[abs(a[i])]>0)
    {
      a[abs(a[i])] = - a[abs(a[i])];
    }
    else
    {
      cout<<abs(a[i])<<" ";
    }
  }
}

int main()
{
  int arr[] = {4,2,4,5,2,3,1};

  int size = sizeof(arr)/sizeof(arr[0]);


  printRepeating(arr, size);

  return 0;
}
