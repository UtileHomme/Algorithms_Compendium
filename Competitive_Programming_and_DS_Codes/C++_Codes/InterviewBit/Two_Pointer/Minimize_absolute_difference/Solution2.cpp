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

    int i = 0;
    int j = 0;
    int k = 0;

    int ans = INT_MAX;

    while(i<sizeA && j<sizeB && k<sizeC)
    {
      int minimum = min(A[i], min(B[j],C[k]));
      int maximum = max(A[i], max(B[j],C[k]));

      ans = min(ans, maximum-minimum);

      if(ans==0)
      {
        return ans;
      }

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


    return ans;
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
