// https://www.interviewbit.com/problems/square-root-of-integer/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int sqrt(int A)
  {
    if(A==0)
      {
        return 0;
      }

      int min = 1;
      int max = A;

      int ans;

      while(min<max)
      {
        int guess = (min+max)/2;

        //to avoid g * g "overflow" condition
        if(guess == A/guess)
        {
          return guess;
        }
        else if(guess<A/guess)
        {
          min = guess+1;
          ans = guess;
        }
        else
        {
          max = guess-1;
        }
      }

      return ans;
  }
};

int main()
{
  Solution s;

  int A = 37;
  int k = s.sqrt(A);

  cout<<k;
}
