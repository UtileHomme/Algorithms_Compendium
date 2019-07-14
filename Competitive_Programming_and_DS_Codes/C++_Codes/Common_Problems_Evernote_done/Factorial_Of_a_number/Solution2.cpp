// https://www.geeksforgeeks.org/tabulation-vs-memoizatation/

// Memoization Method

#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int findFactorial(int k ,int dp[])
{

    if(k==0)
    {
        return 1;
    }

    if(dp[k]!=-1)
    {
        return dp[k];
    }

    return (dp[k] = k * findFactorial(k-1, dp));
}

int main()
{
    int k=5;

    int dp[k+1];

    memset(dp, -1, sizeof(dp));

    cout<<findFactorial(k, dp);

    return 0;
}