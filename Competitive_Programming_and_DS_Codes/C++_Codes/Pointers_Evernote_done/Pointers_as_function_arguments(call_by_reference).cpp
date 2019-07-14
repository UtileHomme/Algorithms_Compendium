// Reference - https://www.youtube.com/playlist?list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_

#include <iostream>

using namespace std;

void increment(int *p)
{
    *p = *p + 1;
}

int main()
{
    int a;
    a = 10;
    increment(&a);

    cout<<a;
    return 0;
}
