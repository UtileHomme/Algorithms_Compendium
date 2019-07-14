// https://www.geeksforgeeks.org/segregate-0s-and-1s-in-an-array-by-traversing-array-once/

// Reference - https://www.youtube.com/watch?v=DR7NgPnErxI

#include <iostream>

using namespace std;

void segArray(int a[], int n)
{
  int l=0, r = n-1;

  while(l<r)
  {
    while(a[l]==0)
    {
      l++;
    }

    while(a[r]==1)
    {
      r--;
    }

    if(l<r)
    {
      a[l]=0;
      a[r]=1;
      l++;
      r--;
    }
  }

}

int main()
{
  int a[] = {1,0,1,0,1,0,1,0,1};

  int n = sizeof(a)/sizeof(a[0]);

  segArray(a,n);

  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" "<<endl;
  }

}

  // Time Complexity - O(n)
