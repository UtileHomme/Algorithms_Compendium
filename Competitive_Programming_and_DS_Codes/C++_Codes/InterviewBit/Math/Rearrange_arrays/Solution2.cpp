// https://www.interviewbit.com/problems/rearrange-array/

// https://www.geeksforgeeks.org/rearrange-given-array-place/


#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  void arrange(vector <int> &A)
  {
    int n = A.size();

    for(int i=0;i<n;i++)
    {
      A[i] += (A[A[i]]%n)*n;
    }

    for(int i=0;i<n;i++)
    {
      A[i] = A[i]/n;
    }

    for(int i=0;i<n;i++)
    {
      cout<<A[i]<<" ";
    }
  }
};

  int main()
  {
    Solution s;

    vector <int> A = {3,2,0,1};

    for(int i=0;i<A.size();i++)
    {
      cout<<A[i]<<" ";
    }

    cout<<endl;

    s.arrange(A);

    return 0;
  }
