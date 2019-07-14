// https://www.geeksforgeeks.org/find-maximum-possible-stolen-value-houses/

// https://www.geeksforgeeks.org/maximum-sum-such-that-no-two-elements-are-adjacent/

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

    int val1 = A[0];

    int val2 = max(A[0], A[1]);

    int maxVal;

    for (int i = 2; i < n; i++)
    {
        maxVal = max(A[i] + val1, val2);
        val1 = val2;
        val2 = maxVal;
    }

    return maxVal;
}

int main()
{
    vector<int> A = {6, 7, 1, 3, 8, 2, 4};

    cout << "Maximum loot possible " << maxLoot(A);

    return 0;
}