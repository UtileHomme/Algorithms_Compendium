// https://www.interviewbit.com/problems/set-matrix-zeros/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  void setZeroes(vector <vector <int>> &A)
  {
    int r = A.size();
    int c = A[0].size();

    bool firstRowHasZero = false, firstColHasZero = false;

    //check if first row has any zeroes
    for(int j=0;j<c;j++)
    {
      if(A[0][j]==0)
      {
        firstRowHasZero = true;
        break;
      }
    }

    //check if first column has any zeroes
    for(int i=0;i<r;i++)
    {
      if(A[i][0]==0)
      {
        firstColHasZero = true;
        break;
      }
    }

    // For every cell not in the first row or column, we check whether there
    // exists a zero. If there is, mark the corresponding row beginning and column beginning as 0
    // This will be used to mark the cells which has these rows and columns as their beginning
    for(int i=1;i<r;i++)
    {
      for(int j=1;j<c;j++)
      {
        if(A[i][j]==0)
        {
          A[i][0] = 0;
          A[0][j] = 0;
        }
      }
    }

    for(int i=1;i<r;i++)
    {
      for(int j=1;j<c;j++)
      {
        if(A[i][0]==0 || A[0][j]==0)
        {
          A[i][j]=0;
        }
      }
    }

    if(firstRowHasZero)
    {
      for(int i=0;i<c;i++)
      {
        A[0][i]=0;
      }
    }

    if(firstColHasZero)
    {
      for(int i=0;i<r;i++)
      {
        A[i][0]=0;
      }
    }
  }
};

int main()
{
  vector <vector <int>> A = {{1,1,1,1}, {1,1,0,1}, {1,1,1,0}};

  Solution s;

  s.setZeroes(A);

  int r = A.size();
  int c = A[0].size();

  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      cout<<A[i][j];
    }

    cout<<endl;
  }
  return 0;
}
