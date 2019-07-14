// https://www.geeksforgeeks.org/converting-strings-numbers-cc/

// using stringstream

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string s = "12345";

    //object from class stringstream
    stringstream geek(s);

    int x=0;
    geek >> x;

    cout<<"Value of x : "<<x;

    return 0;

}
