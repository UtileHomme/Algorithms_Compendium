// https://www.interviewbit.com/problems/add-one-to-number/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
  vector <int> plusOne(vector <int> &A)
  {
    int len = A.size()-1;
    int sum = A[len]+1;

    A[len] = sum%10;
    int carry = sum/10;

    for(int i = len-1;i>=0;i--)
    {
      int sum = A[i] + carry;
      A[i] = sum%10;
      carry = sum/10;
    }

    vector <int> B;

    if(carry==1)
    {
      B.push_back(1);


      for(int i=0;i<A.size();i++)
      {
        B.push_back(A[i]);


      }
      return B;
    }
    else
    {
      bool zeroCheck = false;

      for(int i = 0;i<A.size();i++)
      {
        if(A[i]!=0)
        {
          zeroCheck=true;
        }

        if(zeroCheck==true)
        {
          B.push_back(A[i]);
        }
      }
    }

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
