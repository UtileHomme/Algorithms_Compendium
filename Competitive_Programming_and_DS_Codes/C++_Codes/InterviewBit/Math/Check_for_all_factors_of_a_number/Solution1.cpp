// https://www.interviewbit.com/problems/all-factors/


// https://ideone.com/cJJTko

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  vector<int> allFActors(int A)
  {
    vector <int> k;
      for(int i=1;i<=sqrt(A);i++)
      {

          if(A%i==0)
          {
              k.push_back(i);

              if(A!=1 && i!=sqrt(A))
              {
              k.push_back(A/i);
              }
          }
      }

      sort(k.begin(),k.end());

      return k;
  }

};

int main()
{
  int n = 36;

  vector <int> A;
  Solution s;
  A = s.allFActors(n);

  for(int i=0;i<A.size();i++)
  {
    cout<<A[i]<<endl;
  }
  return 0;
}
