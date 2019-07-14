// https://www.interviewbit.com/problems/wave-array/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
  vector<int> wave(vector <int> &A)
  {
    sort(A.begin(), A.end());

    for(int i=0;i<A.size();i++)
    {
      if(i%2==1)
      {
        swap(A[i-1], A[i]);
      }
    }

    return A;
  }
};

int main()
{
  Solution s;

  vector <int> A = {2,3,1,4};

  vector <int> B = s.wave(A);

  for(int i=0;i<B.size();i++)
  {
    cout<<B[i]<<" ";
  }

return 0;

}
