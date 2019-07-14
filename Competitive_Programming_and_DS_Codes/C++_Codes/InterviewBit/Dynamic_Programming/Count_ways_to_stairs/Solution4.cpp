// https://www.geeksforgeeks.org/count-ways-reach-nth-stair/

// https://www.interviewbit.com/problems/stairs/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int climbStairWays(int n)
{
    int penultimateStep = 0;
    int previousStep = 1;

    int ans;

    for(int i=0; i<n; i++)
    {
        ans = previousStep + penultimateStep;
        penultimateStep = previousStep;
        previousStep = ans;
    }

    return ans;


}

int main()
{
    int n = 4;

    int k = climbStairWays(n);

    cout<<k;
    return 0;
}
