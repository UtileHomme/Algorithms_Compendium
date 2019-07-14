// https://www.interviewbit.com/problems/pascal-triangle/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  vector <vector<int>> pascalTriangle(int A)
  {
    vector <vector <int>> B(A);

    for(int i=0;i<A;i++)
    {
      B[i].resize(i+1);

      B[i][0] = B[i][i] = 1;

      for(int j=1; j<i;j++)
      {
        B[i][j] = B[i-1][j-1] + B[i-1][j];
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
