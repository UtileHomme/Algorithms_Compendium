// https://www.interviewbit.com/problems/pascal-triangle/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  vector <vector<int>> pascalTriangle(int A)
  {

    if(A==0)
    {
      return {};
    }

    vector <vector <int>> B(A);

    B[0].push_back(1);

    if(A==1)
    {
      return B;
    }

    B[1].push_back(1);
    B[1].push_back(1);

    if(A==2)
    {
      return B;
    }

    for(int i=2; i<A;i++)
    {
      B[i].push_back(1);

      for(int k=1;k<i;k++)
      {
        int l = B[i-1][k-1] + B[i-1][k];
        B[i].push_back(l);
      }

      B[i].push_back(1);

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
