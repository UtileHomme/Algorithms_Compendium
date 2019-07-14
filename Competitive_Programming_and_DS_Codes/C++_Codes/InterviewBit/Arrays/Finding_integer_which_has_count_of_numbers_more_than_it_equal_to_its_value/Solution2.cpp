// https://www.interviewbit.com/problems/noble-integer/

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int solve(vector <int> &A)
  {
    int size = A.size();

    sort(A.begin(), A.end());

    for(int i=0;i<size;i++)
    {
      while(i+1<size && A[i]==A[i+1])
      {
        i++;
      }
      
      if(A[i]==size-i-1)
      {
        return 1;
      }

    }

    return -1;
  }
};

int main()
{
  Solution s;

  //Other test cases = -4, -3 , -1, -4, 0
  vector <int> A = {6,5,4,1,3,3,3,3,3};

  int k = s.solve(A);

  cout<<k;
  return 0;
}
