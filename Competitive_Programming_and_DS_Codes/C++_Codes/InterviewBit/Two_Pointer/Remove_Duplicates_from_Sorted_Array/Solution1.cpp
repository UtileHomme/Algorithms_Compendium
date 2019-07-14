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

    int j=0;

    for(int i=0;i<A.size()-1;i++)
    {
      if(A[i]!=A[i+1])
      {
        A[j] = A[i];
        j++;
      }
    }

    A[j] = A[A.size()-1];

    A.resize(j+1);

    return (j+1);
  }
};

int main()
{
  Solution s;

  vector <int> A = {1,2,2,3,4,4,4,5,5};

  int n = A.size();

  n = s.removeDuplicates(A);

  for(int i=0;i<n;i++)
  {
    cout<<A[i]<<" ";
  }

  return 0;
}
