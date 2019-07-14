// https://www.interviewbit.com/problems/rotate-matrix/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  vector < vector <int>> rotate(vector <vector <int>> &A)
  {
    int N = A.size();

    for(int x=0; x<N/2; x++)
    {
      for(int y=x; y<N-x-1; y++)
      {
        int temp = A[x][y];

           // move values from right to top
           A[x][y] = A[y][N-1-x];

           // move values from bottom to right
           A[y][N-1-x] = A[N-1-x][N-1-y];

           // move values from left to bottom
           A[N-1-x][N-1-y] = A[N-1-y][x];

           // assign temp to left
           A[N-1-y][x] = temp;
      }
    }

    return A;
  }
};

int main()
{
  vector <vector <int>> A = {{1, 2, 3, 4}, {5, 6, 7, 8},
                            {9, 10, 11, 12},{13, 14, 15, 16}};

  Solution s;

  vector <vector <int>> B = s.rotate(A);

  for(int i=0;i<B.size();i++)
  {
    for(int j=0;j<B.size();j++)
    {
      cout<<B[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
