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
    int mindiff = INT_MAX;

    int i=0, j=0, k=0;

    int p = A.size();
    int q = B.size();
    int r = C.size();

    mindiff = max(abs(A[i]-B[j]), max(abs(B[j]-C[k]), abs(C[k]-A[i])));


    while(i<p && j<q && k<r)
    {
      int diff = max(abs(A[i]- B[j]),max(abs(B[j]-C[k]),abs(C[k]-A[i])));

      mindiff = min(diff, mindiff);

      if(mindiff==0)
      {
        break;
      }

      int minimum = min(A[i], min(B[j], C[k]));
      if(A[i]==minimum)
      {
        i++;
      }
      else if(B[j]==minimum)
      {
        j++;
      }
      else
      {
        k++;
      }
    }

    return mindiff;
  }
};


int main()
{
  Solution s;

  vector <int> A = {1,4,10};
  vector <int> B = {2,15,20};
  vector <int> C = {10,12};

  int k = s.minimize(A, B, C);

  cout<<k;

}
