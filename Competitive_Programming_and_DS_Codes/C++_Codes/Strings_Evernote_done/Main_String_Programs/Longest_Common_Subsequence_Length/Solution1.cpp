// https://www.geeksforgeeks.org/longest-common-subsequence-dp-4/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int LCS(string X, string Y, int m, int n)
{
    if (m == X.length() || n == Y.length())
    {
        return 0;
    }

    if (X[m] == Y[n])
    {
        return 1 + LCS(X, Y, m + 1, n + 1);
    }
    else
    {
        return max(LCS(X, Y, m, n + 1), LCS(X, Y, m + 1, n));
    }
}

int main()
{
    string X = "ABCDGH";
    string Y = "AEDFHR";

    cout << LCS(X, Y, 0, 0);

    return 0;
}