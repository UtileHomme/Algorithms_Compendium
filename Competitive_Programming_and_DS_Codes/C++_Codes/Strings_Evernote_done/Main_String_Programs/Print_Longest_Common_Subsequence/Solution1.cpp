// https://www.geeksforgeeks.org/printing-longest-common-subsequence/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void LCS(string X, string Y)
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

    int index = lcsArray[m][n];

    string lcs = "";

    i=m, j=n;

    while(i>0 && j>0)
    {
        if(X[i-1]==Y[j-1])
        {
            lcs.insert(lcs.begin(), X[i-1]);
            i--;
            j--;
        }

        else if(lcsArray[i-1][j] > lcsArray[i][j-1])
        {
            i--;
        }
        else
        {
            j--;
        }

    }

    cout<<"LCS is "<<lcs;

}

int main()
{
    string X = "AGGTAB";
    string Y = "GXTXAYB";

    LCS(X, Y);

    return 0;
}