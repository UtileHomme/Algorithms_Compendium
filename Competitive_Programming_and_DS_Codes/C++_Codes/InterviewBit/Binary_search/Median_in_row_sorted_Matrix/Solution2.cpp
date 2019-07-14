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

    int low = A[0][0], high = A[0][0], m;

    for(auto a:A)
    {
      for(auto b:a)
      {
        low = min(low,b);
        high = max(high,b);
      }
    }

    int Q = r*c;

    while(low<=high)
    {
      m = low + (high-low)/2;

      int X = 0, Y = 0;

      for(int i=0;i<r;i++)
      {
        //Finds the count of numbers less than mid
        X = X + (lower_bound(A[i].begin(), A[i].end(), m) - A[i].begin());
      }

      for(int i=0;i<r;i++)
      {
        //Finds the count of numbers less than or equal to mid
        Y = Y + (upper_bound(A[i].begin(), A[i].end(), m) - A[i].begin());
      }

      if(X>Q/2)
      {
        high = m - 1;
      }
      else if(Y<=Q/2)
      {
        low = m + 1;
      }
      else if(X==Q/2)
      {
        return m;
      }

    }

  }
};

int main()
{
  Solution s;
  vector <vector <int>> m = {{1,2,7,10,11}, {3,5,8,9,14}, {4,9,13,15,19}};

  cout<<s.binaryMedian(m);
  return 0;
}
