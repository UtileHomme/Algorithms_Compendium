// https://www.interviewbit.com/problems/matrix-search/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{

public:

  //after the row has been decided, this function will check if the element exists in that row
  int BinarySearch(vector <int> &A, int low, int high, int B)
  {
    if(low<=high)
    {
        int mid = low + (high-low)/2;

        if(A[mid]==B)
        {
          return mid;
        }
        if(A[mid]<B)
        {
          return BinarySearch(A, mid+1, high, B);
        }
        else
        {
          return BinarySearch(A, low, mid-1, B);
        }
    }

    return -1;
  }

  //this function will give the row in which the element might exist
  int BinarySearch1(vector <vector <int>> &A, int low, int high, int B)
  {
    if(low<=high)
    {
      int mid = low + (high-low)/2;

      if(A[mid][0]==B)
      {
        return mid;
      }
      if(A[mid][0]<B)
      {
        return BinarySearch1(A, mid+1, high, B);
      }
      else
      {
        return BinarySearch1(A, low, mid-1, B);
      }
    }

    return high;
  }

  int searchMatrix(vector <vector<int>> &A, int B)
  {
    int row = BinarySearch1(A, 0, A.size()-1, B);

    //if the element doesn't have the likelihood to be found in any row
    if(row==-1)
    {
      return 0;
    }

    if(A[row][0]==B)
    {
      return 1;
    }

    int col = BinarySearch(A[row], 0, A[row].size()-1, B);

    if(col==-1)
    {
      return false;
    }

    return true;
  }
};

int main()
{
  vector < vector <int>> A = {{1,3,5,7},{10,11,16,20},{23,30,34,50}};

  Solution s;

  int B = 19;
  int k = s.searchMatrix(A, B);

  cout<<k;

  return 0;
}
