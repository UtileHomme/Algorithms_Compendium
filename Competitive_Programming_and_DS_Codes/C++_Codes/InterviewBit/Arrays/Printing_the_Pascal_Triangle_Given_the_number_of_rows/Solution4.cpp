// https://www.interviewbit.com/problems/pascal-triangle/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  vector <vector<int>> pascalTriangle(int A)
  {
    int col = 0;
    vector <vector <int>> B(A);

    for(int i=0; i<A; i++)
    {
      B[i].resize(++col);

      for(int j=0;j<col;j++)
      {
        if(i==0 || j==0 || j == col-1)
        {
          B[i][j] = 1;
        }
        else
        {
          B[i][j] = B[i-1][j-1] + B[i-1][j];
        }
      }
    }

    return B;
  }
};

int main()
{
  int A = 6;

  Solution s;

  vector <vector<int>> B;

  B = s.pascalTriangle(A);

  for(int i=0;i<B.size();i++)
  {
    for(int j=0;j<B[i].size();j++)
    {
      cout<<B[i][j]<<" ";
    }
    cout<<endl;
  }
}
