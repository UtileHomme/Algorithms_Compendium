// https://www.interviewbit.com/problems/length-of-last-word/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int lengthOfLastWord(const string &A)
  {
    int len = 0;

    int k = A.length()-1;

    int l;

    //To take care of the spaces at the end
    while(A[k]==' ')
    {
      k--;
    }

    for(l=k; l>=0 && A[l]!=' '; l--)
    {
      len++;
    }

    return len;
  }
};

int main()
{
  Solution s;

  string A = " HelloWorld ";

  int k = s.lengthOfLastWord(A);

  cout<<k;
  return 0;
}
