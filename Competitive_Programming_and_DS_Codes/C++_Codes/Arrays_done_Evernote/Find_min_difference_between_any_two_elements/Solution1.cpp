// https://www.geeksforgeeks.org/find-minimum-difference-pair/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findMinDiff(vector <int> A)
{
    int diff=INT_MAX;

    int n = A.size();

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(abs(A[i]-A[j])<diff)
            {
                diff = abs(A[i]-A[j]);
            }
        }
    }

    return diff;
}

int main()
{
    vector <int> A = {1,5,3,19,18,25};

    cout<<findMinDiff(A);
}