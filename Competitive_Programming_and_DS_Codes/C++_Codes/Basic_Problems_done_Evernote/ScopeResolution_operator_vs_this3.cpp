// http://www.geeksforgeeks.org/scope-resolution-operator-or-this-pointer-in-cpp/

// https://ideone.com/fI1qba

// C++ program to show that :: can be used to access static
// members when there is a local variable with same name
#include<iostream>
using namespace std;

class Test
{
    static int a;  // a IS STATIC NOW
public:

    // Local parameter 'a' hides class member
    // 'a', but we can access it using ::
    void func(int a)  { cout << Test::a; }
};

// In C++, static members must be explicitly defined
// like this
int Test::a = 1;

int main()
{
    Test obj;
    int k = 3 ;
    obj.func(k);
    return 0;
}

/*
Scope resolution operator is used for accessing static or class members
*/
