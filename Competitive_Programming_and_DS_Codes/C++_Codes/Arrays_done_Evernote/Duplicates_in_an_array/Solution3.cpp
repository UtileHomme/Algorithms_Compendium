// https://www.geeksforgeeks.org/?p=9755

// https://leetcode.com/problems/find-all-duplicates-in-an-array/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printRepeating(vector <int> A, int n)
{
  int i=0;

  while(i<A.size())
  {
    // Put element "x" in A[x-1] position if it isn't there already
    if(A[i]!= A[A[i]-1])
    {
      swap(A[i], A[A[i]-1]);
    }
    else
    {
      i++;
    }
  }

  for(i=0; i<A.size(); i++)
  {
    if(A[i]!=i+1)
    {
      cout<<A[i]<<" ";
    }
  }

}

int main()
{
  vector <int> A = {1, 3, 1, 3, 6, 6};

  printRepeating(A, A.size());

  return 0;
}
