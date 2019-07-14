// https://www.geeksforgeeks.org/longest-common-subsequence-dp-4/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int LCS(string X, string Y)
{

    int m = X.length();
    int n = Y.length();

    int lcsArray[m+1][n+1];

    int i,j;

    for(i=0; i<=m; i++)
    {
        for(j=0; j<=n; j++)
        {
            if(i==0 || j==0)
            {
                lcsArray[i][j] = 0;
            }

            else if(X[i] == Y[j])
            {
                lcsArray[i][j] = lcsArray[i-1][j-1] + 1;
            }

            else
            {
                lcsArray[i][j] = max(lcsArray[i-1][j], lcsArray[i][j-1]);
            }

        }
    }

    return lcsArray[m][n];
}

int main()
{
    string X = "ABCDGH";
    string Y = "AEDFHR";

    cout << LCS(X, Y);

    return 0;
}