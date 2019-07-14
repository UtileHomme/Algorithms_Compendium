// https://www.geeksforgeeks.org/find-median-row-wise-sorted-matrix/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  int binaryMedian(vector <vector <int>> &A)
  {
    int r = A.size();
    int c = A[0].size();

    int k = (r*c)/2;

    vector <int> A_copy;

    for(int i=0;i<r;i++)
    {
      for(int j=0; j<c;j++)
      {
        A_copy.push_back(A[i][j]);
      }

    }

    A.clear();

    nth_element(A_copy.begin(), A_copy.begin()+k, A_copy.end());

    return A_copy[k];
  }
};

int main()
{
  Solution s;
  vector <vector <int>> m = {{1,2,7,10,11}, {3,5,8,9,14}, {4,9,13,15,19}};

  cout<<s.binaryMedian(m);
  return 0;
}
