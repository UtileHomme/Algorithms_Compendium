// Reference - https://www.youtube.com/watch?v=7HCd074v8g8

#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    int divisor;
    int dividend;

    if(a>b)
    {
        dividend = a;
        divisor = b;
    }
    else
    {
        dividend = b;
        divisor = a;
    }

    while(divisor>0)
    {
        int remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }

    return dividend;
}

int main()
{
    int a = 105;
    int b = 350;

    int GCD = gcd(a,b);

    cout<<"GCD of a and b is "<<GCD;
    return 0;
}
