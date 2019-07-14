// https://www.interviewbit.com/problems/array-3-pointers/

// https://www.geeksforgeeks.org/find-three-closest-elements-from-given-three-sorted-arrays/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int minimize(const vector<int> &A, const vector <int> &B, const vector <int> &C)
  {
    int mindiff=INT_MAX;
    int diff = INT_MAX;
    for(int i=0; i<A.size();i++)
    {
      for(int j=0;j<B.size();j++)
      {
        for(int k=0;k<C.size();k++)
        {
          diff = max(abs(A[i]-B[j]), max(abs(B[j]-C[k]), abs(C[k]-A[i])));

          mindiff = min(diff, mindiff);
        }
      }
    }

    return mindiff;
  }
};


int main()
{
  Solution s;

  vector <int> A = {20, 24, 100};
  vector <int> B = {2, 19, 22, 79, 800};
  vector <int> C = {10, 12, 23, 24, 119};

  int k = s.minimize(A, B, C);

  cout<<k;

}
