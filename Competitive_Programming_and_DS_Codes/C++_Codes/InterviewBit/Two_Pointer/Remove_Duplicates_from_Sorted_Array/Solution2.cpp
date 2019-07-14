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
    if(A.size()==0 || A.size()==1)
    {
      return A.size();
    }

    vector <int> B;

    for(int i=0;i<A.size()-1;i++)
    {
      if(A[i]!=A[i+1])
      {
        B.push_back(A[i]);
      }
    }

    B.push_back(A[A.size()-1]);

    A = B;
    return (B.size());
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
