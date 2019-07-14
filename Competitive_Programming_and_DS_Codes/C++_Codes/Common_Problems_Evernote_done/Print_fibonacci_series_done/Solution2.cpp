// Refer to CCI Eg - 15 (page 34)
// Typical Dynamic Programming Problem

#include <iostream>

using namespace std;

void fibseries(int n)
{
    int fib[n+1];

    fib[0] = 0;
    fib[1] = 1;

    for(int i=2;i<=n;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    for(int i=0;i<=n;i++)
    {
        cout<<fib[i]<<" ";
    }
}


int main()
{
int k = 4;

fibseries(k);

return 0;
}
