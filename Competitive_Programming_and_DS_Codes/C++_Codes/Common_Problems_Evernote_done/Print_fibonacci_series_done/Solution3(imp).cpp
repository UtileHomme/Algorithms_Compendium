// Refer to CCI Eg - 15 (page 34)
// Typical Dynamic Programming Problem

#include <iostream>

using namespace std;

int fib(int n, int memo[])
{
    if(n<=0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else if(memo[n]>0)
    {
        return memo[n];
    }

    memo[n] = fib(n-1, memo) + fib(n-2,memo);

    return memo[n];
}

void allFib(int n)
{
    int memo[n+1];

    for(int i=0;i<=n;i++)
    {
        memo[i] = 0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<fib(i, memo)<<" ";
    }
}

int main()
{

    int k = 5;

    allFib(k);
    return 0;
}

// Time Complexity = O(n)
