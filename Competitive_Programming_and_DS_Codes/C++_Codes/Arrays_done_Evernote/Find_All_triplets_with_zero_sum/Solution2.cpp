// https://www.geeksforgeeks.org/?p=141095

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void findTriplets(int a[], int size)
{
  bool found = false;

  sort(a, a+size);

  for(int i=0;i<size-1;i++)
  {
    int l = i+1;
    int r = size-1;
    int x = a[i];

    while(l<r)
    {
      if(x+a[l]+a[r]==0)
      {
          cout<<x<<" "<<a[l]<<" "<<a[r]<<endl;
          l++;
          r--;
          found = true;
      }
      //if the sum of three elements is less than zero then
      //increment in left
      else if(x+a[r]+a[l]<0)
      {
        l++;
      }

      //if the sum is greater than zero than decrement in right side
      else
      {
        r--;
      }
    }
  }

  if(found==false)
  {
    cout<<"No triplet found"<<endl;
  }
}

int main()
{
  int a[] = {0,-1,2,-3,1};

  int size = sizeof(a)/sizeof(a[0]);

  findTriplets(a,size);

  return 0;
}
