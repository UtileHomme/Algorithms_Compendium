// https://www.geeksforgeeks.org/?p=19364

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool findTriplets(vector <int> &A, int sum)
{

  int l,r;

  sort(A.begin(), A.end());

  //Fix the first element one by one and find the other
  //two elements
  for(int i=0; i<A.size()-2;i++)
  {

    l=i+1;
    r = A.size()-1;

    while(l<r)
    {
      if(A[i]+A[l]+A[r]==sum)
      {
        cout<<A[i]<<" "<<A[l]<<" "<<A[r]<<" ";
        return true;
      }
      else if(A[i]+A[l]+A[r]<sum)
      {
        l++;
      }
      else
      {
        r--;
      }
    }

  }

  return false;
}

int main()
{
  vector <int> A = {1,4,45,6,10,8};

  int sum = 22;

  findTriplets(A, sum);

  return 0;
}
