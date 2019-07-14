// https://www.geeksforgeeks.org/?p=147416

// https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int removeDuplicates(vector <int> &A)
  {
    int n = A.size();

    int len = 1;

    int prev = A[0];

    for(int i=1;i<n;i++)
    {
      if(A[i]!=prev)
      {
        A[len++] = A[i];
        prev = A[i];
      }
    }

    return len;
  }
};

int main()
{
  Solution s;

  vector <int> A = {1,2,2,3,3,4,4,5,5};

  int n = A.size();

  n = s.removeDuplicates(A);

  for(int i=0;i<n;i++)
  {
    cout<<A[i]<<" ";
  }

  return 0;
}
