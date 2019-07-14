// https://www.geeksforgeeks.org/?p=229406

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector <int> findEncryptedArray(vector <int> &A)
{
  int n = A.size();

  vector <int> B;

  int sum = 0;

  for(int i=0; i<A.size();i++)
  {
    sum  += A[i];
  }

  for(int i=0;i<A.size();i++)
  {
    A[i] = sum - A[i];
    B.push_back(A[i]);
  }

  return B;
}

int main()
{
  vector <int> A = {5,1,2,3,4};

  vector <int> B = findEncryptedArray(A);

  for(int i=0;i<B.size();i++)
  {
    cout<<B[i]<<" ";
  }

}
