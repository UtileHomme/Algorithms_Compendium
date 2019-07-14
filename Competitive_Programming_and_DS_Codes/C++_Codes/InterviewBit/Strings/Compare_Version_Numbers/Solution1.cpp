// https://www.interviewbit.com/problems/compare-version-numbers/

// https://www.geeksforgeeks.org/compare-two-version-numbers/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  int fun(string A, string B)
  {
    int i=0,j=0;

    // when A="01" or B="01/02 etc", we need to remove the beginning zeroes
    while(A[i]=='0')
    {
      i++;
    }

    while(B[j]=='0')
    {
      j++;
    }

    //we need to compare the size of the string without the zeroes
    if(A.size()-i>B.size()-j)
    {
      return 1;
    }
    else if(A.size()-i<B.size()-j)
    {
      return -1;
    }

    while(i<A.size() && j<B.size())
    {
      //after the '0s' have been dispended with and the size of both strings are same
      //we compare each number and return the higher accordingly
      if(A[i]-'0'>B[j]-'0')
      {
        return 1;
      }
      else if(A[i]-'0'<B[j]-'0')
      {
        return -1;
      }

      i++;
      j++;
    }

    return 0;
  }

  int compareVersion(string A, string B)
  {
    int i=0, j=0;

    string temp1, temp2;

    while(i<A.size() || j<B.size())
    {
      temp1.clear();
      temp2.clear();

      //store the characters before the "." character
      while(A[i]!='.' && i<A.size())
      {
        temp1 += A[i];
        i++;
      }

      while(B[j]!='.' && j<B.size())
      {
        temp2 += B[j];
        j++;
      }

      //if the two strings are not equal, there will be one which will be more
      //return that
      if(fun(temp1, temp2)!=0)
      {
        return fun(temp1, temp2);
      }

      i++;
      j++;
    }

    return 0;
  }
};

int main()
{
  Solution s;

  string A = "1.003";
  string B = "1.02";

  int k = s.compareVersion(A,B);

  cout<<k;
  return 0;
}
