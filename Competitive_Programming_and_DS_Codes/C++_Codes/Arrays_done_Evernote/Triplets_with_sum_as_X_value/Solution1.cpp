// https://www.geeksforgeeks.org/?p=19364

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool findTriplets(vector <int> &A, int sum)
{

  for(int i=0;i<A.size()-2;i++)
  {
    for(int j=i+1; j<A.size()-1;j++)
    {
      for(int k=j+1;k<A.size();k++)
      {
        if(A[i]+A[j]+A[k]==sum)
        {
          cout<<A[i]<<" "<<A[j]<<" "<<A[k];
        }
      }
    }
  }

  return false;
}

int main()
{
  vector <int> A = {1,4,45,6,10,8};

  int sum = 22;

  cout<<findTriplets(A, sum);

  return 0;
}
