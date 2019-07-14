// https://ideone.com/yhZUan

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  vector<int> spiralOrder(vector<vector<int> > &A)
  {
    vector <int>B;
    int rows = A.size();
    int cols = A[0].size();

    int dir = 1;

    int row = 0, col = 0,l=0;

    if(rows==0)
    {
      return vector <int> ();
    }

    B.push_back(A[0][0]);

    for(int k=1;k<(rows*cols);k++)
    {
      if(dir==1)
      {
        if(col==cols-l-1)
        {
          row++;
          dir=2;
        }
        else
        {
          col++;
        }

      }

      else if(dir==2)
      {
        if(row ==rows-l-1)
        {
          col--;
          dir=3;
        }
        else
        {
          row++;
        }


      }

      else if(dir==3)
      {
        if(col==l)
        {
          row--;
          dir=4;
        }
        else
        {
          col--;
        }

      }
      else if(dir==4)
      {
        if(row==l+1)
        {
          col++;
          dir=1;
          l++;
        }
        else
        {
          row--;
        }

      }

      B.push_back(A[row][col]);

    }

    return B;
  }

};

int main()
{
  vector<vector<int> > A{ { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 }};

  int rows = A.size();
  int cols = A[0].size();

  vector <int> B;
  Solution s;
  B = s.spiralOrder(A);

  for(int i=0;i<B.size();i++)
  {
    cout<<B[i]<<" ";
    cout<<endl;
  }
  return 0;
}

/*
1 2 3
4 5 6
7 8 9

// Time Complexity = O(rows * cols)
*/
