// https://www.interviewbit.com/problems/largest-number/

#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int mycompare(string X, string Y)
{
  string XY = X.append(Y);

  string YX = Y.append(X);

  return XY.compare(YX) > 0 ? 1:0;
}

class Solution
{
public:
  string largestNumber(const vector <int> &A)
  {
    vector <string> s;

    string k;

    bool isZero = true;

    for(int i=0;i<A.size();i++)
    {
      if(A[i]!=0)
      {
        isZero = false;
      }

      string l = to_string(A[i]);
      s.push_back(l);
    }

    //if all numbers in the array are 0, only return 0
    if(isZero)
    {
      k.append(to_string(0));
      return k;
    }

    sort(s.begin(), s.end(), mycompare);

    for(auto i:s)
    {
      k.append(i);
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
