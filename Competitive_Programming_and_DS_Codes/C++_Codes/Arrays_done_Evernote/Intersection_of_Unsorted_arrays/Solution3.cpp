// https://www.geeksforgeeks.org/find-union-and-intersection-of-two-unsorted-arrays/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printIntersection(vector <int> A, vector <int> B)
{
  vector <int> C;

  set <int> hs;

  for(int i=0; i<A.size(); i++)
  {
    hs.insert(A[i]);
  }

  for(int i=0;i<B.size();i++)
  {
    if(hs.find(B[i])!=hs.end())
    {
        C.push_back(B[i]);
    }
  }

  for(int i=0;i<C.size();i++)
  {
    cout<<C[i]<<" ";
  }
}

int main()
{
  vector <int> A = {7, 1, 5, 2, 3, 6};
  vector <int> B = {3, 8, 6, 20, 7};

  printIntersection(A,B);
  return 0;
}
