// https://www.geeksforgeeks.org/?p=7953

#include <iostream>

using namespace std;

void printRepeating(int a[], int size)
{
  int count[size];

  for(int i=0;i<size;i++)
  {
    count[i]=0;
  }

  for(int i=0;i<size;i++)
  {
    if(count[a[i]]==1)
    {
      cout<<a[i]<<" ";
    }
    else
    {
      count[a[i]]++;
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
