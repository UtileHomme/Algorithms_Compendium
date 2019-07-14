// Reference - https://www.youtube.com/watch?v=d3kd5KbGB48&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&index=4&t=0s

#include <iostream>

using namespace std;

int main()
{
    int x = 5;

    int *p = &x;

    *p = 6;

    int **q = &p;

    int ***r = &q;

    cout<<"*p "<<*p<<endl;

    cout<<"*q "<<*q<<endl;

    cout<<"**q "<<**q<<endl;

    cout<<"**r "<<**r<<endl;

    cout<<"***r "<<***r<<endl;

    return 0;
}
