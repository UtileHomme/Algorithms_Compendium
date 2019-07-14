// https://www.geeksforgeeks.org/find-union-and-intersection-of-two-unsorted-arrays/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printUnion(vector <int> A, vector <int> B)
{
  vector <int> C;

  C = A;

  vector <int>::iterator it;

  for(int i=0; i<B.size();i++)
  {
    //find if the element in the second array exists in the first array or not
    //if it doesn't add it to the new array
    it  = find(A.begin(), A.end(), B[i]);

    if(it!=A.end())
    {
      continue;
    }
    else
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
