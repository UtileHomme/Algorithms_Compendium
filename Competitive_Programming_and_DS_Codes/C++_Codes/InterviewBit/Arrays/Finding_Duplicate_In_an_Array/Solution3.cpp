// https://www.interviewbit.com/problems/find-duplicate-in-array/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  int repeatedNumber(const vector <int> &A)
  {
    long long sum = 0;

    long long n = A.size();

    for(int i=0;i<n;i++)
    {
      sum += A[i];
    }

    return sum - ((n) * (n-1))/2;
  }
};

int main()
{
  Solution s;

  vector <int> A = {1,2,3,4,2};

  int k = s.repeatedNumber(A);

  cout<<k;
}
