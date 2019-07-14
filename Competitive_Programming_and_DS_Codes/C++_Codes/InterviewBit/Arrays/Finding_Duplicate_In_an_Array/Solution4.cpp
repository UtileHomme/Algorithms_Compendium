// https://www.interviewbit.com/problems/find-duplicate-in-array/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int repeatedNumber(vector <int> &A)
  {
    sort(A.begin(), A.end());

    for(int i=1; i<A.size(); i++)
    {
      if(A[i]==A[i-1])
      {
        return A[i];
      }
    }

    return -1;
  }

};


int main()
{
  Solution s;

  vector <int> A = {1,2,3,4,2};

  int k = s.repeatedNumber(A);

  cout<<k;
}
