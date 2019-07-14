// https://leetcode.com/problems/summary-ranges/

#include <iostream>
#include <bits/stdc++.h>
#include <cstring>

using namespace std;

vector<string> summaryRanges(vector<int> &A)
{
    int n = A.size();

    vector<string> res;

    for (int i = 0; i < n; i++)
    {
        int begin = A[i];

        while (i != (n - 1) && A[i] == A[i + 1] - 1)
        {
            i++;
        }

        int end = A[i];

        if (begin == end)
        {
            res.push_back(to_string(begin));
        }
        else
        {
            res.push_back(to_string(begin) + "->" + to_string(A[i]));
        }
    }

    return res;
}

int main()
{
    vector<int> A = {1, 2, 3, 5, 7, 9, 10, 11, 13};

    vector<string> B = summaryRanges(A);

    for (int i = 0; i < B.size(); i++)
    {
        cout << B[i] << endl;
    }
    return 0;
}