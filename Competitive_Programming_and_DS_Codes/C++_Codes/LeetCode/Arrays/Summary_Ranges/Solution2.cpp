// https://leetcode.com/problems/summary-ranges/

#include <iostream>
#include <bits/stdc++.h>
#include <cstring>

using namespace std;

vector<string> summaryRanges(vector<int> &A)
{
    int n = A.size();

    vector<string> res;

    for (int i = 0; i < n;)
    {
        int start = i, end = i;

        while(end+1<n && A[end+1] == A[end]+1)
        {
            end++;
        }

        if(end>start)
        {
            res.push_back(to_string(A[start]) + "->" + to_string(A[end]));
        }
        else 
        {
            res.push_back(to_string(A[start]));
        }

        i = end+1;
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