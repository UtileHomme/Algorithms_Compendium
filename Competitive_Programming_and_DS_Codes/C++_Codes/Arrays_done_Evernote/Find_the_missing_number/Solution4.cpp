// https://www.geeksforgeeks.org/?p=580

// Reference - https://www.youtube.com/watch?v=lBk6fVhuCyw

// https://ideone.com/AV0ojM

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int FindMissingNumber(vector<int> A, int n)
{
  set <int> s;

  //add all array numbers to the set
  for(int i=0; i<A.size(); i++)
  {
    s.insert(A[i]);
  }

  //the digits to be checked
  int expectedCount = A.size()+1;

  // start from 1 to the expectedCount and check whichever is not found in the set
  for(int i=1; i<expectedCount; i++)
  {
    if(s.find(i)==s.end())
    {
      return i;
    }
  }

  return -1;
}

int main()
{
  vector<int> A = {1, 2, 3, 4, 5, 6, 8};
  int missing_no = FindMissingNumber(A, A.size());

  cout << missing_no;

  return 0;
}
