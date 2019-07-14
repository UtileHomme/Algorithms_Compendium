// https://www.interviewbit.com/problems/merge-two-sorted-lists-ii/

// O(m+n) space

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  void mergeSortedArrays(vector <int> &A, vector <int> &B)
  {
    int sizeA = A.size();
    int sizeB = B.size();


    vector <int> C;

    int i=0, j=0;

    while(i<sizeA && j<sizeB)
    {
      if(A[i]<B[j])
      {
        C.push_back(A[i]);
        i++;
      }
      else
      {
        C.push_back(B[j]);
        j++;
      }
    }

    while(i<sizeA)
    {
      C.push_back(A[i]);
      i++;
    }

    while(j<sizeB)
    {
      C.push_back(B[j]);
      j++;
    }

    for(int i=0; i<C.size();i++)
    {
      cout<<C[i]<<" ";
    }

  }

};

int main()
{
  Solution s;

  vector <int> A = {1,3,5,7};

  vector <int> B = {2,4,6,8};

  s.mergeSortedArrays(A,B);

  return 0;
}
