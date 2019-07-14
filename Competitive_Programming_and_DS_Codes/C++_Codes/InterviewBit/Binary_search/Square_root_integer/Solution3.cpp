// https://www.interviewbit.com/problems/square-root-of-integer/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int sqrt(int A)
  {
    if(A==0 || A==1)
    {
      return A;
    }

    float x = A;
    float y = 1;
    float e = 0.00001;

    while(x-y>e)
    {
      x = (x+y)/2;
      y = A/x;
    }

    return x;
  }
};

int main()
{
  Solution s;

  int A = 37;
  int k = s.sqrt(A);

  cout<<k;
}
