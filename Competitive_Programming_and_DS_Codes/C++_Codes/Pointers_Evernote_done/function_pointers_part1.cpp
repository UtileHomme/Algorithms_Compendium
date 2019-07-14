// Reference - https://www.youtube.com/watch?v=ynYtgGUNelE&index=15&t=0s&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_

#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int c;
    //this is how we declare a function pointer
    int (*p)(int, int);

    //p = add;
    p = &add;

    //c = p(2,3)
    c = (*p)(2,3);

    cout<<"Sum = "<<c;

    return 0;
}
