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
    int carry = 1;

    vector <int> B;

    reverse(A.begin(), A.end());

    for(int i=0;i<A.size();i++)
    {
      int sum = A[i] + carry;
      B.push_back(sum%10);
      carry = sum/10;
    }

    //this is the case when the first digit is 9
    while(carry==1)
    {
      B.push_back(carry%10);
      carry = carry/10;
    }

    //this is the case when there are 0's at the beginning of the array
    while(B[B.size()-1]==0 && B.size()>1)
    {
      B.pop_back();
    }

    reverse(B.begin(), B.end());

    return B;
  }
};

int main()
{
  vector <int> A = {0, 9, 9, 9, 9, 9, 9};

  vector <int> B;

  Solution s;
  B = s.plusOne(A);

  for(int i=0;i<B.size();i++)
  {
    cout<<B[i]<<" ";
  }

  return 0;
}
