// https://www.geeksforgeeks.org/find-union-and-intersection-of-two-unsorted-arrays/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector <int> A, int l, int h, int x)
{
  if(l<=h)
  {
    int mid = l + (h-l)/2;

    if(A[mid]==x)
    {
      return mid;
    }
    else if(A[mid]<x)
    {
      return binarySearch(A, mid+1, h, x);
    }
    else if(A[mid]>x)
    {
      return  binarySearch(A, l, mid-1, x);
    }
  }

  return -1;
}

void printUnion(vector <int> A, vector <int> B)
{
  vector <int> C;

  // To swap two arrays and not vectors
  //   if (m > n)
  //   {
  //       int *tempp = arr1;
  //       arr1 = arr2;
  //       arr2 = tempp;
  //
  //       int temp = m;
  //       m = n;
  //       n = temp;
  //   }

  if(A.size()>B.size())
  {
    A.swap(B);
  }

  sort(A.begin(), A.end());

  C = A;

  for(int i=0;i<B.size();i++)
  {
    if(binarySearch(A, 0, A.size()-1, B[i])==-1)
    {
      C.push_back(B[i]);
    }
  }


  for(int i=0; i<C.size(); i++)
  {
    cout<<C[i]<<" ";
  }
}

int main()
{
  vector <int> A = {7, 1, 5, 2, 3, 6};
  vector <int> B = {3, 8, 6, 20, 7};

  printUnion(A,B);
  return 0;
}
