// https://www.geeksforgeeks.org/?p=580

// Reference - https://www.youtube.com/watch?v=lBk6fVhuCyw

// https://ideone.com/AV0ojM

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int FindMissingNumber(vector<int> A, int n)
{
  sort(A.begin(), A.end());

  //if the last element doesn't match its index
  if (A[A.size() - 1] != A.size())
  {
    return A.size();
  }

  //ensure that 0 is the first index
  else if (A[0] != 0)
  {
    return 0;
  }

  //if the above conditions have been met, then the missing number lies between 0 and n
  for (int i = 1; i < A.size(); i++)
  {
    int expectedNum = A[i - 1] + 1;

    if (A[i] != expectedNum)
    {
      return expectedNum;
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
