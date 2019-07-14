// https://www.geeksforgeeks.org/?p=9755

#include <iostream>

using namespace std;

void printRepeating(int a[], int n)
{
  int i;

  for(i=0;i<n;i++)
  {
    if(a[abs(a[i])]>=0)
    {
      a[abs(a[i])] = -a[abs(a[i])];
    }
    else
    {
      cout<<abs(a[i])<<" ";
    }
  }
}

int main()
{
  int a[] = {1, 6, 3, 1, 3, 6, 6};

  int size = sizeof(a)/sizeof(a[0]);

  printRepeating(a, size);

  return 0;
}
