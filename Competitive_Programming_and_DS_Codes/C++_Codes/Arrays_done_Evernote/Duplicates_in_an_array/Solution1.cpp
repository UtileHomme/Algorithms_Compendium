// https://www.geeksforgeeks.org/duplicates-array-using-o1-extra-space-set-2/

#include <iostream>

using namespace std;

void printRepeating(int a[], int n)
{
  for(int i=0;i<n;i++)
  {
    int index = a[i]%n;
    a[index] += n;
  }

  for(int i=0;i<n;i++)
  {
    if((a[i]/n)>1)
    {
      cout<<i<<" ";
    }
  }
}

int main()
{
  int a[] = {1,2,3,4,3};

  int size = sizeof(a)/sizeof(a[0]);

  printRepeating(a, size);

  return 0;
}
