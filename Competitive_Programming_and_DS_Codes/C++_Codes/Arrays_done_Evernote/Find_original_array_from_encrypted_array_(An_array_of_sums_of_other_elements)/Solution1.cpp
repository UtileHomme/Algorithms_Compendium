// https://www.geeksforgeeks.org/find-original-array-encrypted-array-array-sums-elements/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector <int> findOriginalArray(vector <int> A)
{
  int sum = 0;

  vector <int> B;

  for(int i=0; i<A.size();i++)
  {
    sum += A[i];
  }

  sum = sum/(A.size()-1);

  for(int i=0; i<A.size();i++)
  {
    A[i] = sum - A[i];
    B.push_back(A[i]);
  }

  return B;
}

int main()
{
  vector <int> A = {10,14, 12, 13, 11};

  vector <int> B = findOriginalArray(A);

  for(int i=0;i<B.size();i++)
  {
    cout<<B[i]<<" ";
  }

  return 0;
}
