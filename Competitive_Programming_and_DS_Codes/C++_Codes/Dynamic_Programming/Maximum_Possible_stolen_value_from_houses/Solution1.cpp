// https://www.geeksforgeeks.org/find-maximum-possible-stolen-value-houses/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int maxLoot(vector<int> A)
{
    int n = A.size();

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return A[0];
    }
    else if (n == 2)
    {
        return max(A[0], A[1]);
    }

    // dp[i] represent the maximum value stolen
    // so far after reaching house i.
    int dp[n];

    // Initialize the dp[0] and dp[1]
    dp[0] = A[0];
    dp[1] = max(A[0], A[1]);

    for (int i = 2; i < n; i++)
    {
        dp[i] = max(A[i] + dp[i - 2], dp[i - 1]);
    }

    return dp[n - 1];
}

int main()
{
    vector<int> A = {6, 7, 1, 3, 8, 2, 4};

    cout << "Maximum loot possible " << maxLoot(A);

    return 0;
}