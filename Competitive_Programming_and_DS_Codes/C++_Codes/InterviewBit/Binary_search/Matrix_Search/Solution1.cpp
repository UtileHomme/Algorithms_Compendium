// https://www.interviewbit.com/problems/matrix-search/

//

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int searchMatrix(vector <vector<int>> &A, int B)
  {
    if(A.empty())
    {
      return false;
    }

    int row = A.size();
    int col = A[0].size();

    int low =0, high = row*col-1;

    while(low<=high)
    {
      int mid = low + (high-low)/2;

      if(A[mid/col][mid%col]==B)
      {
        return true;
      }
      else if(A[mid/col][mid%col]>B)
      {
        high = mid-1;
      }
      else
      {
        low = mid + 1;
      }
    }

    return false;
  }
};

int main()
{
  vector < vector <int>> A = {{1,3,5,7},{10,11,16,20},{23,30,34,50}};

  Solution s;

  int B = 7;
  int k = s.searchMatrix(A, B);

  cout<<k;

  return 0;
}
