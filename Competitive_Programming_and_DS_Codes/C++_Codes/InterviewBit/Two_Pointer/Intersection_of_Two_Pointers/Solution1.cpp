// https://www.interviewbit.com/problems/intersection-of-sorted-arrays/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  vector <int> intersect(const vector <int> &A, const vector <int> &B)
  {
    int i=0,j=0;
    vector <int> C;

    while(i<A.size() && j<B.size())
    {
      if(A[i]<B[j])
      {
        i++;
      }
      else if(A[i]>B[j])
      {
        j++;
      }
      else
      {
        C.push_back(A[i]);
        i++;
        j++;
      }
    }

    return C;
  }
};

int main()
{
  Solution s;

  vector <int> A = {1,2,4,5,6,6,7,8,8};
  vector <int> B = {4,5,5,6,6,8};

  vector <int> C = s.intersect(A, B);

  for(int i=0; i<C.size();i++)
  {
    cout<<C[i]<<" ";
  }

  return 0;
}
