// https://www.interviewbit.com/problems/anti-diagonals/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  vector<vector <int>> antiDiagonal(vector <vector<int>> &A)
  {

    int n = A.size();

    int k = 2*n - 1;
    vector <vector<int>> B(k);


    for(int i=0;i<2*n-1;i++)
    {
      int z;
      if(i<n)
      {
        z = 0;
      }
      else
      {
        z = i - n + 1;
      }

      for(int j=z; j<=i-z; j++)
      {
        B[i].push_back(A[j][i-j]);
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
