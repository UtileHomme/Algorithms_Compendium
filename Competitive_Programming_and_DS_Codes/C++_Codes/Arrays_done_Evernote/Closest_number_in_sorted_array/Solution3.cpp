// https://www.geeksforgeeks.org/find-closest-number-array/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int findClosest(vector <int> &A, int k)
{
  int n = A.size();

  //finds the first element that is just more than or equal to the target
  int searchResult = A[lower_bound(A.begin(), A.end(), k)-A.begin()];

  //finds the position first element that is just more than or equal to the target
  int pos = lower_bound(A.begin(), A.end(), k)-A.begin();

  //if the last element is smaller than the target
  if(pos==n-1)
  {
    return A[n-1];
  }

  //if the first element is larger than the target
  else if(pos==0)
  {
    return A[0];
  }

  else
  {
    return abs(k-searchResult)<abs(k - A[pos-1]) ? searchResult: A[pos-1];
  }

  return 0;
}

int main()
{
 vector <int> A = {2, 4, 6, 7, 8, 8, 9};

 int k = 5;
 int closest = findClosest(A,k);

 cout<<closest;

 return 0;
}
