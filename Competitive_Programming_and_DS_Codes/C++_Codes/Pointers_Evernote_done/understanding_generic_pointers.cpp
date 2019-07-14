// https://www.youtube.com/watch?v=JTttg85xsbo&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&index=3&t=0s

#include <iostream>

using namespace std;

int main()
{
    int a = 1025;

    int *p;

    p=&a;

    cout<<"size of integer is "<<sizeof(int);

    cout<<endl;
    cout<<"Address is "<<p<<" Value is "<<*p<<endl;

    void *p0;

    //we cannnot derefence a void pointer since it doesn't point to any particular data type
    p0 = p;

    //only gives address
    cout<<p0;

    return 0;
}
