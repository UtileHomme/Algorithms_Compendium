// https://www.interviewbit.com/problems/merge-two-sorted-lists-ii/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  void mergeSortedArrays(vector <int> &A, vector <int> &B)
  {
    for(int i=0;i<B.size();i++)
    {
      A.push_back(B[i]);
    }

    //or A.end()
    sort(A.begin(), A.begin() + A.size());

    for(int i=0; i<A.size();i++)
    {
      cout<<A[i]<<" ";

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
