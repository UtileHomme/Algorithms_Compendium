// https://www.interviewbit.com/problems/anti-diagonals/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  vector<vector <int>> antiDiagonal(vector <vector<int>> &A)
  {
    int size = A.size();

    int rowsOfAns = 2*(size-1) + 1;

    vector <vector<int>> B(rowsOfAns);

    for(int i=0;i<size;i++)
    {
      for(int j=0;j<size;j++)
      {
        B[i+j].push_back(A[i][j]);
      }
    }

    return B;
  }
};

int main()
{
  Solution s;

  vector <vector <int>> A = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
  };

  vector <vector<int>> B = s.antiDiagonal(A);

  for(int i=0;i<B.size();i++)
  {
    for(int j=0;j<B[i].size();j++)
    {
      cout<<B[i][j]<<" ";
    }
    cout<<endl;
  }
}
