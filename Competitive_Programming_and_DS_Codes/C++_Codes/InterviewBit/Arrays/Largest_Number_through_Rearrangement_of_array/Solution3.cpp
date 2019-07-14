// https://www.interviewbit.com/problems/largest-number/

#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

unsigned long long concatenate(int x, int y)
{
  unsigned pow = 10;

  //we are trying to find the number of digits of 'y', so that
  //the same number of 10s can be multiplied with 'x'
  while(y>=pow)
  {
    pow = pow * 10;
  }

  return (unsigned long long )x*pow+y;
}

bool myfunction(int i, int j)
{
  return concatenate(i,j) > concatenate(j,i);
}

class Solution
{
public:
  string largestNumber(const vector <int> &A)
  {
    vector <int> B = A;
    vector <string> s;

    string k;

    sort(B.begin(), B.end(), myfunction);

    for(int i=0;i<B.size();i++)
    {
      k.append(to_string(B[i]));
    }

    if(k[0]=='0')
    {
      return to_string(0);
    }

    return k;
  }
};

int main()
{
  vector <int> A = {1, 34, 3, 98, 9, 76, 45, 4, 12, 121};

  Solution k;

  string s = k.largestNumber(A);

  cout<<s;

  return 0;
}
