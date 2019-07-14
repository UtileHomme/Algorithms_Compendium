// https://www.geeksforgeeks.org/count-pairs-difference-equal-k/

//Handles the duplicate case

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector <int> A, int low, int high, int x)
{
  if(low<=high)
  {
    int mid = low + (high - low)/2;

    if(A[mid]==x)
    {
      return mid;
    }
    else if(A[mid]<x)
    {
      return binarySearch(A, mid+1, high, x);
    }
    else
    {
      return binarySearch(A, low, mid-1, x);
    }
  }

  return -1;
}

int countPairsWithDiffk(vector <int> A, int k)
{
  int count = 0;

  sort(A.begin(), A.end());

  for(int i=0; i<A.size()-1; i++)
  {
    if(binarySearch(A, i+1, A.size()-1, A[i]+k)!=-1)
    {
      count++;
    }
  }

  return count;
}

int main()
{
  vector <int> A = {1,5,3,4,2,1};

  int k = 3;

  int cnt = countPairsWithDiffk(A,k);

  cout<<cnt;
  return 0;
}
