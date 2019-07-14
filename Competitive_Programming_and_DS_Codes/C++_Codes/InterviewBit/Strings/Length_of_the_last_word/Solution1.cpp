// https://www.interviewbit.com/problems/length-of-last-word/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int lengthOfLastWord(const string A)
  {
    int len = A.size();

    int indexForSpaceOccurrence = 0;

    int i, k = len - 1;

    while(A[k]==' ')
    {
      k--;
    }

    // Traverse the string from last point where there is no space
    for(i=k;i>=0;i--)
    {
      if(A[i]==' ')
      {
        indexForSpaceOccurrence = i;
        break;
      }
    }

    int length;

    // We have reached the start of the string and encountered no spaces
    if(i==-1)
    {
      length = k+1;
    }
    else
    {
      length = k - indexForSpaceOccurrence;
    }

    return length;
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
