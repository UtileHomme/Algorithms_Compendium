// https://www.geeksforgeeks.org/?p=141095

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void findTriplets(int a[], int size)
{
  bool found = false;

  for(int i=0;i<size-1;i++)
  {
    unordered_set<int> s;

    for(int j=i+1; j<size;j++)
    {
      int x = - (a[i] + a[j]);

      if(s.find(x)!=s.end())
      {
        cout<<x<<" "<<" "<<a[i]<<" "<<a[j];
        cout<<endl;
        found = true;
      }
      else
      {
        //one of the element keeps on getting added at every iteration
        //and in the end we have all except one elements added to the set
        s.insert(a[j]);
      }
    }
  }

  if(found==false)
  {
    cout<<"No triplets with sum = 0 exist"<<endl;
  }
}

int main()
{
  int a[] = {0,-1,2,-3,1};

  int size = sizeof(a)/sizeof(a[0]);

  findTriplets(a,size);

  return 0;
}
