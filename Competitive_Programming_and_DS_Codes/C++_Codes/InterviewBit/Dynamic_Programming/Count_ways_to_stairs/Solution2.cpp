// https://www.geeksforgeeks.org/count-ways-reach-nth-stair/

// https://www.interviewbit.com/problems/stairs/

// Dynamic Programming

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int climbStairWays(int n)
{
    int ways[n+1];

    ways[0] = 1;
    ways[1] = 1;

    for(int i=2; i<=n; i++)
    {
        ways[i] = ways[i-1] + ways[i-2];
    }

    return ways[n];
}

int main()
{
    int n = 4;

    int k = climbStairWays(n);

    cout<<k;
    return 0;
}
