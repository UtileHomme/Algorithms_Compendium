// http://www.geeksforgeeks.org/scope-resolution-operator-or-this-pointer-in-cpp/

// C++ program to show use of this to access member when
// there is a local variable with same name.
#include<iostream>
using namespace std;
class Test
{
    int a;
public:
    Test() { a = 1; }

    // Local parameter ‘a’ hides object’s member
    // ‘a’, but we can access it using this.
    void func(int a)  { cout << this->a; }
};

int main()
{
    Test obj;
    int k = 3 ;
    obj.func(k);
    return 0;
}

// Output = 1

/*
"this" pointer is for accessing object members when there is a local variable with same name 
*/
