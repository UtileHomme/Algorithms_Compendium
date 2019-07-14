// https://www.geeksforgeeks.org/count-ways-reach-nth-stair/

// https://www.interviewbit.com/problems/stairs/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int climbStairWays(int n)
{
    if(n<=1)
    {
        return 1;
    }

    return climbStairWays(n-1) + climbStairWays(n-2);
}

int main()
{
    int n = 4;

    int k = climbStairWays(n);

    cout<<k;
    return 0;
}
