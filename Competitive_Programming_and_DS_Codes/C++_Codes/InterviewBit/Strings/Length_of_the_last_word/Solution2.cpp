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

    if(A.length()==1)
    {
      return 1;
    }

    int k = A.length()-1;

    //To take care of the spaces at the end
    while(A[k]==' ')
    {
      k--;
    }

    //till we don't reach the end of the string
    for(int i=0;i<=k;i++)
    {
      // we are increasing the count for the current word
      if(A[i]!=' ')
      {
        len++;
        continue;
      }
      //we've reached the point for a new word or an empty space
      // hence the start of the new word is expected
      else if(A[i]==' ')
      {
        len=0;
        continue;
      }
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
