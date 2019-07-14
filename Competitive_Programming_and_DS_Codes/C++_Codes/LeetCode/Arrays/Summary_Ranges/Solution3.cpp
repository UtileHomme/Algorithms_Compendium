// https://leetcode.com/problems/summary-ranges/

#include <iostream>
#include <bits/stdc++.h>
#include <cstring>

using namespace std;

vector<string> summaryRanges(vector<int> &A)
{
    int n = A.size();

    vector<string> res;

    int start = 0;

    while(start<n)
    {
        int l = start, r = n-1; 

        while(l<r)
        {
            int m = l + (r-l)/2 +1;

            if( (A[m]-A[start]) > (m-start) )
            {
                r = m-1;
            }
            else 
            {
                l = m;
            }
        }

        if(l==start)
        {
            res.push_back(to_string(A[start]));
        }
        else 
        {
            res.push_back(to_string(A[start]) + "->" + to_string(A[l]));
        }

        start = l+1;
    }


    return res;
}

int main()
{
    vector <int> A = {1, 2, 3, 5, 7, 9, 10, 11, 13};

    vector <string> B = summaryRanges(A);

    for (int i = 0; i < B.size(); i++)
    {
        cout << B[i] << endl;
    }
    return 0;
}