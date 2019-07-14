// https://www.interviewbit.com/problems/pascal-triangle/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  vector <vector<int>> pascalTriangle(int A)
  {
    vector <vector <int>> B;

    if(A<=0)
    {
      return B;
    }

    vector <int> temp;
    temp.push_back(1);
    B.push_back(temp);

    for(int i=0; i<A-1;i++)
    {
      vector <int> newRow;
      newRow.push_back(1);

      for(int j=0;j<B[i].size()-1; j++)
      {
        newRow.push_back(B[i][j] + B[i][j+1]);
      }

      newRow.push_back(1);

      B.push_back(newRow);
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
