// https://www.interviewbit.com/problems/kth-row-of-pascals-triangle/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  vector<int> kthRow(int A)
  {
    vector <int> B;

    int curr = 0, next = 0;

    for(int i=0; i<A; i++)
    {
      B.push_back(1);

      for(int j=0;j<B.size();j++)
      {
        next = curr + B[j];
        curr = B[j];
        B[j] = next;
      }

      curr = 0;
    }

    B.push_back(1);
    return B;
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
