// https://www.geeksforgeeks.org/program-for-factorial-of-a-number/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findFactorial(int k)
{

    if (k == 0)
        return 1;
    return k * findFactorial(k - 1);
}

int main()
{
    int k = 5;

    cout << findFactorial(k);

    return 0;
}