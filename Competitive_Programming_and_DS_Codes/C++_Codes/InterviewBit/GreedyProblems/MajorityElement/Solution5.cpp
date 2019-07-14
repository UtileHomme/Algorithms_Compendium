// https://www.interviewbit.com/problems/majority-element/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int majorityElement(const vector <int> &A)
  {
    unordered_map<int,int>M;
    int n = A.size();
    for(int i=0;i<n;i++)
    {
        if(M.find(A[i])!=M.end())
            M[A[i]]++;
        else
            M.insert(make_pair(A[i],1));

        if(M[A[i]]>n/2)
            return A[i];
    }
  }
};

int main()
{

  vector <int> A = {1,2,3,4,4,6,4,4,4};

  Solution s;

  int k = s.majorityElement(A);

  cout<<k;

  return 0;
}
