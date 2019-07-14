#include <iostream>

using namespace std;

int main()
{
    int x = 10;

    int *ptr;

    ptr = &x;

    //this gives the address
    cout <<ptr<<endl;

    //this gives the value
    cout<<*ptr<<endl;
}
