// https://www.interviewbit.com/problems/find-duplicate-in-array/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  int repeatedNumber(const vector <int> &A)
  {
    vector <bool> visited(A.size()-1);

    for(int i=0;i<A.size();i++)
    {
      if(visited[A[i]-1])
      {
        return A[i];
      }
      else
      {
        visited[A[i]-1] = 1;
      }
    }

    return -1;
  }
};

int main()
{
  Solution s;

  vector <int> A = {1,2,3,4,2};

  int k = s.repeatedNumber(A);

  cout<<k;
}
