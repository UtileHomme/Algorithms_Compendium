// Refer to CCI Eg - 15 (page 34)
// Typical Dynamic Programming Problem

#include <iostream>

using namespace std;

int fib(int n)
{
    if(n<=0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }

    return fib(n-1) + fib(n-2);
}

void fibseries(int n)
{
    for(int i=0;i<=n;i++)
    {
        cout<<fib(i)<<" ";
    }
}


int main()
{
int k = 4;

fibseries(k);

return 0;
}

// Time Complexity = O(2^n)
