// https://www.interviewbit.com/problems/kth-row-of-pascals-triangle/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  vector<int> kthRow(int A)
  {
    A = A + 1;

    vector <vector <int>> B(A);

    vector <int> result;

    for(int i=0;i<A; i++)
    {
      for(int j=0;j<=i;j++)
      {
        if(j==0 || i == j)
        {
          B[i].push_back(1);
        }
        else
        {
          B[i].push_back(B[i-1][j-1] + B[i-1][j]);
        }
      }
    }

    for(int i=0;i<A;i++)
    {
      result.push_back(B[A-1][i]);
    }
    return result;
  }
};

int main()
{
  Solution s;

  int A = 3;
  vector <int> B = s.kthRow(A);

  for(int i=0;i<B.size();i++)
  {
    cout<<B[i]<<" ";
  }

  return 0;
}
