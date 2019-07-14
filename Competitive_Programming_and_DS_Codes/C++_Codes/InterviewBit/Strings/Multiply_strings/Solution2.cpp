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
   reverse(A.begin(), A.end());
   reverse(B.begin(), B.end());

   string res;

   res.resize(A.size() + B.size(), '0');

   for(int i=0;i<A.size();i++)
   {
     int p = 0;

     for(int j=0;j<B.size() || p; ++j)
     {
       int val = res[i+j]-'0';
       int mul=0;

       if(j<B.size())
       {
         mul = (B[j]-'0');
       }

       val = val + (A[i]-'0')*mul + p;

       p = val/10;
       val = val % 10;

       res[i+j] = (val + '0');
     }
   }

   while((res.size()>1) && (res[res.size()-1]=='0'))
   {
     res.pop_back();
   }

   reverse(res.begin(), res.end());

   return res;


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
