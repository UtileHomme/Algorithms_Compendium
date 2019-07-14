// https://www.interviewbit.com/problems/arraybug/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  vector <int> rotateArray(vector <int> &A, int frequency)
  {
    vector <int> B;

    for(int i=0;i<A.size();i++)
    {
      B.push_back(A[(i+frequency)%(A.size())]);
    }
      return B;
  }

};

int main()
{
  Solution s;

  vector <int> A {1,2,3,4,5};

  vector <int> B;
  B = s.rotateArray(A, 2);

  for(int i=0;i<B.size();i++)
  {
    cout<<B[i]<<" ";
  }
}

// Time Complexity = O(n)
