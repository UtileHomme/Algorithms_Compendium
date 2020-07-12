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

    if(size==1)
    {
      return A;
    }

    vector < pair<int, int>> search_space;

    for(int i=0;i<size;i++)
    {
      search_space.push_back(make_pair(0,i));
    }

    for(int i=1; i<size;i++)
    {
      search_space.push_back(make_pair(i, size-1));
    }

    vector <vector <int>> B;

    for(int i = 0;i< search_space.size(); i++)
    {
      vector <int> temp;

      int x = search_space[i].first;
      int y = search_space[i].second;

      while(x<size && y>=0)
      {
        temp.push_back(A[x][y]);
        x++;
        y--;
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
