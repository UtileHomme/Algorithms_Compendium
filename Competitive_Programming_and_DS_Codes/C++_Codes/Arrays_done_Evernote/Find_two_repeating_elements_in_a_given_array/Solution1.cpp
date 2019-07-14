// https://www.geeksforgeeks.org/?p=7953

#include <iostream>

using namespace std;

void printRepeating(int a[], int size)
{
  int i, j;
  cout<<"Repeating elements are "<<endl;

  for(int i=0;i<size;i++)
  {
    for(int j=i+1; j<size;j++)
    {
      if(a[i]==a[j])
      {
        cout<<a[i]<<" ";
        break;
      }
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
