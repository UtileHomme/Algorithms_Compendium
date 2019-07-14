// https://www.interviewbit.com/problems/add-one-to-number/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//if the initial zero condition is not needed

class Solution
{
public:
  vector <int> plusOne(vector <int> &A)
  {
    for(int i=A.size()-1; i>=0; i--)
    {
      if(A[i]!=9)
      {
        A[i]++;
        break;
      }

      A[i] = 0;
    }

    if(A[0]==0)
    {
      A.insert(A.begin(),1);
    }

  return A;
  }
};

int main()
{
  vector <int> A = {9, 9, 9, 9, 9};

  vector <int> B;

  Solution s;
  B = s.plusOne(A);

  for(int i=0;i<B.size();i++)
  {
    cout<<B[i]<<" ";
  }

  return 0;
}
