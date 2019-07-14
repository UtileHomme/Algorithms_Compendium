// https://www.interviewbit.com/problems/diffk/

// Given a sorted array

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int diffPossible(vector <int> &A, int B)
  {
    int l = 0;
    int r = 1;

    if(A.size()==0 || A.size()==1)
    {
      return 0;
    }

    while(r!=A.size())
    {
      if(l==r)
      {
        r++;
        continue;
      }

      int diff = A[r] - A[l];

      if(diff==B)
      {
        return 1;
      }

      //Eg - 1 5 7 6
      // Let current elements be 1 and 5 and diff = 3
      // Since the elements are sorted, we need to increase the right element
      else if(diff<B)
      {
        r++;
      }
      else
      {
        l++;
      }
    }

    return 0;

  }
};

int main()
{
  Solution s;

  vector <int> A = {1,3,7,8,9};

  int B = 3;

  int k = s.diffPossible(A, B);

  cout<<k;

  return 0;
}
