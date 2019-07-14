// https://www.geeksforgeeks.org/stdstring-class-in-c/

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s;

    getline(cin,s);

    cout<<s<<endl;

    cout<<s.capacity()<<endl;


    return 0;
}
