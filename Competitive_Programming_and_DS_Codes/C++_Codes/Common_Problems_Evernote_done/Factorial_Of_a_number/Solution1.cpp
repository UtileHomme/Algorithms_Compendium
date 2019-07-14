// https://www.geeksforgeeks.org/tabulation-vs-memoizatation/

// Tabulation Method

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findFactorial(int k)
{
    int dp[k+1];

    dp[0] = 1;

    for(int i=1; i<=k; i++)
    {
        dp[i] = dp[i-1] * i;
    }

    return dp[k];
}

int main()
{
    int k=5;

    cout<<findFactorial(k);

    return 0;
}