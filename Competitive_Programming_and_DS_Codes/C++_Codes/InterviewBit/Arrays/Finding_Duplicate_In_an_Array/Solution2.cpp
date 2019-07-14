// https://www.interviewbit.com/problems/find-duplicate-in-array/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  int repeatedNumber(const vector <int> &A)
  {
    int xor1 = 0;

    for(int i=1; i<A.size();i++)
    {
      xor1 ^= A[i];
      xor1 ^= i;
    }

    xor1 ^= A[0];

    return xor1;
  }
};

int main()
{
  Solution s;

  vector <int> A = {4,2,3,1,2};

  int k = s.repeatedNumber(A);

  cout<<k;
}
