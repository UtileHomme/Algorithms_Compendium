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
    set <int> s;

    for(int i=0; i<A.size(); i++)
    {
      if(s.find(A[i])!=s.end())
      {
        return A[i];
      }

      s.insert(A[i]);
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
