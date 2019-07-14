// https://www.interviewbit.com/problems/minimize-the-absolute-difference/

// https://www.geeksforgeeks.org/minimize-maxai-bj-ck-minai-bj-ck-three-different-sorted-arrays/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int solve(vector<int> &A, vector<int> &B, vector<int> &C)
  {

    int sizeA = A.size();
    int sizeB = B.size();
    int sizeC = C.size();

    int i = sizeA-1;
    int j = sizeB-1;
    int k = sizeC-1;

    int mindiff = abs(max(A[i], max(B[j],C[k])) - min(A[i], min(B[j], C[k])));

    while(i!=-1 && j!=-1 && k!=-1)
    {
      int diff = abs(max(A[i], max(B[j],C[k])) - min(A[i], min(B[j], C[k])));

      if(diff<mindiff)
      {
        mindiff = diff;
      }

      int max_term = max(A[i],max(B[j],C[k]));

      if(A[i]==max_term)
      {
        i--;
      }
      else if(B[j]==max_term)
      {
        j--;
      }
      else
      {
        k--;
      }

    }


    return mindiff;
  }
};

int main()
{
  Solution s;

  vector <int> A = {1, 4, 5, 8, 10};
  vector <int> B = {6, 9, 15};
  vector <int> C = {2, 3, 6, 6};

  int k = s.solve(A,B,C);

  cout<<k;

  return 0;
}
