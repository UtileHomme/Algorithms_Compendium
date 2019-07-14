// https://www.interviewbit.com/problems/matrix-search/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int searchMatrix(vector <vector<int>> &A, int B)
  {
    int row = A.size();
    int col = A[0].size();

    //first we'll traverse the rows and the first column
    //this will help us zero in on the row for the next iteration
    int low=0, high = row-1, mid;

    if(A[0][0]>B || A[row-1][col-1]<B)
    {
      return false;
    }

    while(low<=high)
    {
      mid = low + (high - low)/2;

      if(A[mid][0]==B)
      {
        return true;
      }
      else if(A[mid][0]<B)
      {
        low = mid+1;
      }
      else
      {
        high = mid-1;
      }
    }

    //the final value of high will give us the row in which "B" might lie
    low = 0;
    int searchRow = high;
     high = col - 1;

     while(low<=high)
     {
       mid = low + (high-low)/2;

       if(A[searchRow][mid]==B)
       {
         return true;
       }
       else if(A[searchRow][mid]<B)
       {
         low = mid + 1;
       }
       else
       {
         high = mid - 1;
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
