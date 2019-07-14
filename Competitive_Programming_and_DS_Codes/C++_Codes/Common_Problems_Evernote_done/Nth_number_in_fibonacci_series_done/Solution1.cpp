// https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/

// Refer to page 27 and 33 of CCI for Time Complexity

#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if(n<=0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }

}

int main()
{
    int k = 6;

    int nth = fibonacci(k);

    cout<<nth;

    return 0;
}

// Time Complexity = O(2^n)
// Space Complexity = O(n)
