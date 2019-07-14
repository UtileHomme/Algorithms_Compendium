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

    bool row = false, col = false;

    for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
      {
        if(A[i][j]==0)
        {
          //if there is a "0" in the first row
          if(i==0)
          {
            row = true;
          }
          if(j==0)
          {
            col = true;
          }

          //set the respective column and rows as zero
          A[0][j] = 0;
          A[i][0] = 0;
        }
      }
    }

    for(int i=1;i<r;i++)
    {
      if(A[i][0]==0)
      {
        for(int j=1;j<c;j++)
        {
          A[i][j]=0;
        }
      }
    }

    for(int j=1;j<c;j++)
    {
      if(A[0][j]==0)
      {
        for(int i=1;i<r;i++)
        {
          A[i][j]=0;
        }
      }
    }

    if(A[0][0]==0)
    {
      if(row==true)
      {
        for(int j=1;j<c;j++)
        {
          A[0][j]=0;
        }
      }

      if(col==true)
      {
        for(int i=1;i<r;i++)
        {
          A[i][0]=0;
        }
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
