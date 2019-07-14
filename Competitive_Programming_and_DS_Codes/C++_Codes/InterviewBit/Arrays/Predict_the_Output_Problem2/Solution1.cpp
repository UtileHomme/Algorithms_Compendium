// https://www.interviewbit.com/problems/arrayimpl1/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  vector <int> performOps(vector <int> A)
  {
    //create a vector of double the size of vector A and initialize as 0
    vector<int> B(2*A.size(), 0);

    for(int i=0;i<A.size();i++)
    {
      B[i] = A[i];
      B[i + A.size()] = A[(A.size() - i)% A.size()];
    }

    return B;
  }
};

int main()
{

  Solution s;
  vector <int> A = {5,10,2,1};

  vector <int> B = s.performOps(A);

  for (int i = 0; i < B.size(); i++) {
    cout<<B[i]<<" ";
  }

  return 0;
}
