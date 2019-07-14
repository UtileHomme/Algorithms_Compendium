// https://www.interviewbit.com/problems/largest-number/

#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

bool mycompare(string X, string Y)
{
  return X + Y > Y + X;
}

class Solution
{
public:
  string largestNumber(const vector <int> &A)
  {
    vector <string> s;

    string k;

    for(int i=0;i<A.size();i++)
    {
      string l = to_string(A[i]);
      s.push_back(l);
    }

    sort(s.begin(), s.end(), mycompare);

    for(auto l : s)
    {
      k.append(l);
    }

    int pos = 0;
    while(k[pos]=='0' && pos+1<k.size())
    {
      pos++;
    }

    return k.substr(pos);
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
