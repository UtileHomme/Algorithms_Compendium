// https://www.geeksforgeeks.org/segregate-0s-and-1s-in-an-array-by-traversing-array-once/

// Reference - https://www.youtube.com/watch?v=DR7NgPnErxI

#include <iostream>

using namespace std;

void segArray(int a[], int n)
{
  int left = 0;
  int right = n-1;

  while(left<right)
  {
    if(a[left]==1)
    {
      int temp = a[left];
      a[left]= a[right];
      a[right] = temp;
      right--;
    }
    else
    {
      left++;
    }
  }

}

int main()
{
  int a[] = {0,1,0,1,0,1,0,1};

  int n = sizeof(a)/sizeof(a[0]);

  segArray(a,n);

  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" "<<endl;
  }

}

  // Time Complexity - O(n)
