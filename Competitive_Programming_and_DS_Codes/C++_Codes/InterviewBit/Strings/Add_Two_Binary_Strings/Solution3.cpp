// https://www.interviewbit.com/problems/add-binary-strings/

// https://www.geeksforgeeks.org/program-to-add-two-binary-strings/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  string addBinary(string A, string B)
  {
    string res="";

    int i = A.size()-1, j = B.size()-1, carry = 0;

    while(i>=0 || j>=0)
    {
      int val = ((i>=0)?A[i--]-'0':0) + ((j>=0)?B[j--]-'0':0) + carry;

      //the sum of each place can either be 0, 1, 2 or 3
      carry = val>1?1:0;

      res = res + to_string(val%2);
    }

    if(carry==1)
    {
      res = res + to_string(carry);
    }

    reverse(res.begin(), res.end());

    return res;
  }
};

int main()
{
  string A = "111";
  string B = "01";

  Solution s;

  string k = s.addBinary(A,B);

  cout<<k;

  return 0;
}
