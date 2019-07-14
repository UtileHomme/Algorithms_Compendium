// https://www.geeksforgeeks.org/segregate-0s-and-1s-in-an-array-by-traversing-array-once/

// Reference - https://www.youtube.com/watch?v=DR7NgPnErxI


#include <iostream>

using namespace std;

void segArray(int a[], int n)
{
  int cnt = 0;

  for(int i=0;i<n;i++)
  {
    if(a[i]==0)
    {
      cnt++;
    }
  }

  for(int j=0;j<cnt;j++)
  {
    a[j]=0;
  }

  for(int j=cnt;j<n;j++)
  {
    a[j]=1;
  }
}

int main()
{
  int a[] = {1,0,0,1,1,0,0,1,0};

  int n = sizeof(a)/sizeof(a[0]);

  segArray(a,n);

  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" "<<endl;
  }

}

// Time Complexity - O(n)
