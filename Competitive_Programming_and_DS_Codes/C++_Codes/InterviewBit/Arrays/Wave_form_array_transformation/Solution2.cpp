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

    int i = 0, n = A.size();

    vector <int> result;

    while(i<n)
    {
      if(i+1<n)
      {
        result.push_back(A[i+1]);
      }
      if(i<n)
      {
        result.push_back(A[i]);

        i = i+2;
      }
    }

    return result;
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
