// Reference - https://www.youtube.com/watch?v=E8Yh4dw6Diw&index=14&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&t=0s

#include <iostream>

using namespace std;

int *Add(int *a, int *b)
{
    int c = *a + *b;
    return &c;
}

int main()
{
    int a = 2;
    int b = 4;

    int *ptr = Add(&a, &b);

    cout<<"Sum = "<<*ptr;
    return 0;
}
