// https://www.interviewbit.com/problems/power-of-2/

// https://www.geeksforgeeks.org/given-huge-number-check-power-two/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  int power(string A)
  {
    long long k= 0;
    int i=0;
    int len = A.size();

    //converting the string into the number
    while(i<len)
    {
      k = k*10 + (A[i]- '0');
      i++;
    }

    if(k==1 || k==0)
    {
      return 0;
    }

    int p = k-1;

    if((p & k) == 0)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
};

int main()
{
  Solution s;

  string A = "128";

  int k = s.power(A);

  cout<<k;

  return 0;
}
