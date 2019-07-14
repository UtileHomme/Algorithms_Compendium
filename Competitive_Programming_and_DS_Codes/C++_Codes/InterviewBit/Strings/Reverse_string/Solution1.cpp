// https://www.interviewbit.com/problems/reverse-the-string/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  void reverseword(string &A, int i, int j)
  {
    while(i<j)
    {
      char t = A[i];
      A[i]=A[j];
      A[j]=t;
      i++;
      j--;
    }
  }

  void reverseWords(string &A)
  {
    int i=0,j=0, l=0;
    int len = A.length();

    //wordcount
    int wc = 0;

    while(true)
    {
      // skip spaces at the front
      while(i<len && A[i]==' ')
      {
        i++;
      }

      //we've reached the end of the original string
      if(i==len)
      {
        break;
      }

      if(wc)
      {
        A[j++]=' ';
        l=j;
      }

      while(i<len && A[i]!=' ')
      {
        A[j]=A[i];
        i++;
        j++;
      }

      reverseword(A,l,j-1);
      wc++;
    }

    A.resize(j);
    reverseword(A,0,j-1);

    for(int i=0;i<A.length();i++)
    {
      cout<<A[i];
    }
  }
};

int main()
{
  Solution s;

  string A = " The blue sky   wails ";

  s.reverseWords(A);

  return 0;
}
