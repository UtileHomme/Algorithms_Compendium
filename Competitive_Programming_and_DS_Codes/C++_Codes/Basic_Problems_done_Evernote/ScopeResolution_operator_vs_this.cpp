// http://www.geeksforgeeks.org/scope-resolution-operator-or-this-pointer-in-cpp/

// C++ program to show that local parameters hide
// class members
#include<iostream>
using namespace std;
class Test
{
    int a;
public:
    Test() { a = 1; }

    // Local parameter 'a' hides class member 'a'
    void func(int a)  { cout << a; }
};

int main()
{
    Test obj;
    int k = 3 ;
    obj.func(k);
    return 0;
}

//Output = 3
