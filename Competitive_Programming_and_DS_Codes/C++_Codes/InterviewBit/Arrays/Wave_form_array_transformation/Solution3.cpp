// https://www.interviewbit.com/problems/wave-array/

// https://www.geeksforgeeks.org/sort-array-wave-form-2/

// Not Lexicographical solution

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
  vector<int> wave(vector <int> &A)
  {
    for(int i=0;i<A.size();i= i+2)
    {
      if(i>0 && A[i-1]> A[i])
      {
        swap(A[i], A[i-1]);
      }
      if(i<A.size()-1 && A[i]<A[i+1])
      {
        swap(A[i], A[i+1]);
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
