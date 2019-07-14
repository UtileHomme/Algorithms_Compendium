// https://www.interviewbit.com/problems/minimum-characters-required-to-make-a-string-palindromic/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int solve(string A)
  {
    int start = 0, end = A.length()-1;

    int temp_end = end;

    while(start<=temp_end)
    {
      if(A[start]==A[temp_end])
      {
        start++;
        temp_end--;
      }
      else
      {
        start = 0;
        temp_end = end--;
      }
    }

    return A.length() - (end+1);

  }
};

int main()
{
  Solution s;

  string A = "AACECAAAA";

  int k = s.solve(A);

  cout<<k;
  return 0;
}
