// Refer to CCI V.5 (page 36)

#include <iostream>

using namespace std;

int squareroot(int n, int min, int max)
{
    if(max<min)
    {
      return -1;
    }

    int guess = (min+max)/2;

    if(guess*guess==n)
    {
      return guess;
    }
    else if(guess*guess<n)
    {
      return squareroot(n, guess+1, max);
    }
    else
    {
      return squareroot(n, min, guess-1);
    }
}

int main()
{
  int n = 2500;

  int k = squareroot(n, 1, n);

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

// Time Complexity = O(log n)
