// https://www.geeksforgeeks.org/find-union-and-intersection-of-two-unsorted-arrays/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printUnion(vector <int> A, vector <int> B)
{
  vector <int> C;

  set <int> hs;

  for(int i=0;i<A.size();i++)
  {
    hs.insert(A[i]);
  }

  for(int i=0;i<B.size(); i++)
  {
    hs.insert(B[i]);
  }

  for(auto it=hs.begin(); it!=hs.end(); it++)
  {
    cout<<*it<<" ";
  }
}

int main()
{
  vector <int> A = {7, 1, 5, 2, 3, 6};
  vector <int> B = {3, 8, 6, 20, 7};

  printUnion(A,B);
  return 0;
}
