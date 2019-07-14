// https://www.interviewbit.com/problems/anti-diagonals/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  vector<vector <int>> antiDiagonal(vector <vector<int>> &A)
  {
    vector <vector<int>> B;

    vector <int> temp;

    int row = A.size();
    int col = A[0].size();

    if(row == 0 || col==0)
    {
      return B;
    }

    int i, j=0;

    for(int i=0;i<col;i++)
    {
      temp.clear();

      int p = i, q = j;

      while(p>=0 && q<=(row-1))
      {
        temp.push_back(A[q][p]);
        p--;
        q++;
      }

      B.push_back(temp);
    }

    i = col-1;

    for(j=1;j<row;j++)
    {
      temp.clear();

      int p = i, q = j;

      while(p>=0 && q<=(row-1))
      {
        temp.push_back(A[q][p]);
        p--;
        q++;
      }

      B.push_back(temp);
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
