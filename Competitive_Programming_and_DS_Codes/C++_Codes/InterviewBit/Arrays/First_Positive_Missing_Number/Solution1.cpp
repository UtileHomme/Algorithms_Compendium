// https://www.interviewbit.com/problems/first-missing-integer/

#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
  int firstMissingPositive(vector <int> &A)
  {
    int n = A.size();

    //this loop is to ensure that all positive numbers are put
    //at the point such that A[i] = i + 1
    for(int i = 0; i<n; i++)
    {
      if(A[i]>0 && A[i]<=n)
      {
        int pos = A[i] - 1;
        if(A[pos]!=A[i])
        {
          swap(A[pos], A[i]);
          i--;
        }
      }
    }

    for(int i=0;i<n;i++)
    {
      if(A[i]!= i + 1)
      {
        return (i+1);
      }
    }

    //for the case when all numbers are at the right position and the next
    //number to the highest positive number is returned
    return (n+1);

  }
};

int main()
{
  Solution s;

  vector <int> A = {-3, -10, 1, 3};
  int k = s.firstMissingPositive(A);

  cout<<k;
  return 0;
}
