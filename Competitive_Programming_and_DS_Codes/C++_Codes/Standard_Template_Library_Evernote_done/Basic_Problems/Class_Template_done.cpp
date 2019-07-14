// https://www.youtube.com/watch?v=Vc1RyqWFbiA&list=PL5jc9xFGsL8G3y3ywuFSvOuNm3GjBwdkb

#include <iostream>
using namespace std;

template <typename T>

class Bovector
{
    T a[1000];
    int size;

public:
    Bovector():size(0)
    {

    }

    void push(T x)
    {
        a[size] = x;
        size++;
    }

    void print()
    {
        for(int i=0;i<size;i++)
        {
            cout<<a[i]<<endl;
        }
    }
};

int main()
{
    Bovector<int> bv;

    bv.push(2);
    bv.push(5);
    bv.push(8);
    bv.push(9);
    bv.print();
}
