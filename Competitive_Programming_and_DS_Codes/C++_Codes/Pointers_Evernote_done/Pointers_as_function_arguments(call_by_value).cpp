// Reference - https://www.youtube.com/playlist?list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_

#include <iostream>

using namespace std;

void increment(int a)
{
    a = a+1;
    cout<<"Address of a in increment method "<<&a<<endl;
}

int main()
{
    int a;
    a = 10;
    increment(a);

    //value is still 10
    cout<<a<<endl;
    cout<<"Address of a in main method "<<&a<<endl;

    return 0;
}
