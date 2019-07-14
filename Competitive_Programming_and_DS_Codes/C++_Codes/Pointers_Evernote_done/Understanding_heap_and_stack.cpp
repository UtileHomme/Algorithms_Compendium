// Reference - https://www.youtube.com/watch?v=_8-ht2AKyH4&t=0s&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&index=12

#include <iostream>

using namespace std;

int main()
{
    int *p;
    p = new int;

    *p = 10;

    delete p;

    p = new int[20];

    delete[] p;
    return 0;
}
