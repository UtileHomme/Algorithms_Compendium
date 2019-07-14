// Refer to CCI V.6 (page 36)

#include <iostream>

using namespace std;

int squareroot(int n)
{
    if(n<=0)
    {
      return -1;
    }

    for(int guess=1; guess*guess<=n;guess++)
    {
      if(guess*guess==n)
      {
        return guess;
      }
    }

    return -1;
}

int main()
{
  int n = 250;

  int k = squareroot(n);

  if(k==-1)
  {
    cout<<"No integral square root exists";
  }
  else
  {
    cout<<"The square root is "<<k;
  }

  return 0;
}

// Time Complexity = O(sqrt n)
