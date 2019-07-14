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

    //this vector will keep a track of the column index in which there is a zero
    //initially the values are set to "1" and changed to "0" later
    vector <int> col(c,1);

    int flag = 0;

    //check for each row
    for(int i=0;i<r;i++)
    {
      flag = 0;

      //if any column of that row has a "0", set the value for "col[j] as 0"
      //marking this column has to be filled with zeroes
      for(int j=0;j<c;j++)
      {
        if(A[i][j]==0)
        {
          flag = 1;
          col[j] = 0;
        }
      }

      //if flag = 1, then this row is to be filled with zeroes
      if(flag==1)
      {
        for(int j=0;j<c;j++)
        {
          A[i][j]=0;
        }
      }
    }

    //fill the corresponding columns with zeroes as well
    for(int j=0;j<c;j++)
    {
      if(col[j]==0)
      {
        for(int i=0;i<r;i++)
        {
          A[i][j]=0;
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
