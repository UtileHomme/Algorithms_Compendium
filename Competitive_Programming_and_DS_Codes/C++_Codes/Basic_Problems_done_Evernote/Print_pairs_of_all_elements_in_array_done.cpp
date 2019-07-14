// CCI - Eg 2 (page 28)

#include <iostream>

using namespace std;

int main()
{
  int a[] = {1,2,3,4,5};

  int n = sizeof(a)/sizeof(a[0]);

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(i!=j)
      {
        cout<<a[i]<<" "<<a[j]<<endl;
      }
    }
  }
}

// Time Complexity = O(n^2)
