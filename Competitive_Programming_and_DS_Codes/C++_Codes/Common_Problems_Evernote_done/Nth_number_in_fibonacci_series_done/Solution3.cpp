// https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/


#include <iostream>

using namespace std;

int fibonacci(int n)
{
    int a=0;
    int b=1;
    int c,i;

    if(n==0)
    {
        return a;
    }
    else if(n==1)
    {
        return b;
    }

    for(i=2;i<=n;i++)
    {
        c= a + b;
        a = b;
        b = c;
    }

    return b;
}

int main()
{
    int k = 6;

    int nth = fibonacci(k);

    cout<<nth;

    return 0;
}

// Time complexity = O(n)
// Space Complexity = O(1)
