// https://www.geeksforgeeks.org/find-closest-number-array/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int getClosest(int val1, int val2, int target)
{
  if(target-val1 >= val2 - target)
  {
    return val2;
  }
  else
  {
    return val1;
  }
}

int findClosest(vector <int> &A, int k)
{
  int n = A.size();
  if(k<=A[0])
  {
    return A[0];
  }

  if(k>=A[n-1])
  {
    return A[n-1];
  }

  int i=0, j=n-1, mid=0;

  while(i<=j)
  {
    mid = i + (j-i)/2;

    if(A[mid]==k)
    {
      return A[mid];
    }

    // if target is less than mid element,
    // then search left
    if(A[mid]>k)
    {
      if(mid>0 && k>A[mid-1])
      {
        return getClosest(A[mid-1], A[mid],k);
      }

      j = mid;
    }

    // if target is more than mid element,
    // then search right
    else
    {
      if(mid<n-1 && k<A[mid+1])
      {
        return getClosest(A[mid], A[mid+1], k);
      }

      i = mid+1;
    }
  }

  return A[mid];
}

int main()
{
 vector <int> A = {2, 5, 6, 7, 8, 8, 9};

 int k = 3;
 int closest = findClosest(A,k);

 cout<<closest;

 return 0;
}
