// https://www.youtube.com/watch?v=Vc1RyqWFbiA&list=PL5jc9xFGsL8G3y3ywuFSvOuNm3GjBwdkb

#include <iostream>

using namespace std;

template <typename T>

T square(T x)
{
    return x*x;
}

int main()
{
    cout<<square(5)<<endl;
    cout<<square(5.5)<<endl;
}
