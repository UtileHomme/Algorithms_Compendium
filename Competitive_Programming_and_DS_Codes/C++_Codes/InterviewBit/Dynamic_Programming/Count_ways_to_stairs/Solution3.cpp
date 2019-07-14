// https://www.geeksforgeeks.org/count-ways-reach-nth-stair/

// https://www.interviewbit.com/problems/stairs/

// Memoization

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int helper(int n, vector <int> &A)
{
    if(A[n]!=-1)
    {
        return A[n];
    }

    if(n<=2)
    {
        A[n] = n;
    }
    else
    {
        A[n] = helper(n-1, A) + helper(n-2, A);
    }

    return A[n];
}

int climbStairWays(int n)
{
   vector <int> A(n+1, -1);

   if(n==1)
   {
       return 1;
   }

    return helper(n, A);
}

int main()
{
    int n = 3;

    int k = climbStairWays(n);

    cout<<k;
    return 0;
}
