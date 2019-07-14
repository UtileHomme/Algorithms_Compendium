// https://www.interviewbit.com/problems/kth-row-of-pascals-triangle/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  vector<int> kthRow(int A)
  {
    int a = 1;

    vector <int> B;

    B.push_back(a);

    for(int i=1;i <=A;i++)
    {
      a = (a * (A- i + 1))/ i;
      B.push_back(a);
    }

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
