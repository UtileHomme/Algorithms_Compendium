// https://www.interviewbit.com/problems/multiply-strings/

// https://www.geeksforgeeks.org/multiply-large-numbers-represented-as-strings/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  string multiply(string A, string B)
  {
    int n1 = A.size();
    int n2 = B.size();

    if(n1==0 || n2==0)
    {
      return "0";
    }

    //after multiplying two numbers, the max size of the output
    //will not be more than the sum of the size of two numbers
    vector <int> result(n1+n2,0);

    //Maintains the output indices from the end
    int n1_pos = 0;
    int n2_pos = 0;

    // each position of the first number is
    // to be multiplied with each position of the other number
    for(int i=n1-1; i>=0; i--)
    {
      int carry = 0;

      int n1 = A[i] - '0';

      n2_pos = 0;

      // each position of the first number is
      // to be multiplied with each position of the other number
      for(int j=n2-1; j>=0; j--)
      {
        int n2 = B[j] - '0';

        int sum = n1*n2 + result[n1_pos + n2_pos] + carry;

        carry = sum/10;

        result[n1_pos + n2_pos] = sum%10;

        n2_pos++;
      }

      if(carry>0)
      {
        result[n1_pos + n2_pos] = result[n1_pos + n2_pos] + carry;
      }

      n1_pos++;
    }

    int i = result.size()-1;

    while(i>=0 && result[i]==0)
    {
      i--;
    }

    if(i==-1)
    {
      return "0";
    }

    string s = "";

    while(i>=0)
    {
      s = s + to_string(result[i--]);
    }

    return s;

  }
};

int main()
{

  string A = "987";
  string B = "981";

  Solution s;

  string k = s.multiply(A,B);

  cout<<k;

  return 0;
}
