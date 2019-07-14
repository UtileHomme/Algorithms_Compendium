// Reference - https://www.youtube.com/watch?v=ynYtgGUNelE&index=15&t=0s&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_

#include <iostream>

using namespace std;

void PrintHello(char *name)
{
    cout<<"Hello "<<name;
}
int main()
{
    void (*ptr)(char *);

    ptr = PrintHello;

    ptr("Jatin");

    return 0;
}
