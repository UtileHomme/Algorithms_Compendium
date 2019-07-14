// https://www.geeksforgeeks.org/find-minimum-difference-pair/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findMinDiff(vector<int> A)
{
    int diff = INT_MAX;

    int n = A.size();

    sort(A.begin(), A.end());

    for (int i = 0; i < n - 1; i++)
    {
        if ((A[i+1]-A[i]) < diff)
        {
            diff = A[i+1]-A[i];
        }
    }

    return diff;
}

int main()
{
    vector<int> A = {1, 5, 3, 19, 16, 25};

    cout << findMinDiff(A);
}