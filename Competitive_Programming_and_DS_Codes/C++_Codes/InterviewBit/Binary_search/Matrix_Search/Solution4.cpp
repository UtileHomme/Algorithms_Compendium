// https://www.interviewbit.com/problems/matrix-search/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  int bin_search(vector <vector <int>> &A, int B, int row)
  {
    int col = A[0].size();

    int mid, low = 0, high = col-1;

    while(low<=high)
    {
      mid = low + (high - low)/2;

      if(A[row][mid]==B)
      {
        return true;
      }
      if(A[row][mid]>B)
      {
        high = mid - 1;
      }
      else
      {
        low = mid + 1;
      }
    }

    return false;
  }

  int searchMatrix(vector <vector<int>> &A, int B)
  {
    int row = A.size();

    int low=0, high = row-1, mid;

    while(low<=high)
    {
      mid = low + (high - low)/2;

      if(A[mid][0]==B)
      {
        return true;
      }
      if(mid!=row-1 && A[mid][0]<B && A[mid+1][0]>B)
      {
        return bin_search(A,B,mid);
      }
      if(mid==row-1 && A[mid][0]<B)
      {
        return bin_search(A,B,mid);
      }
      if(A[mid][0]>B)
      {
        high = mid - 1;
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
