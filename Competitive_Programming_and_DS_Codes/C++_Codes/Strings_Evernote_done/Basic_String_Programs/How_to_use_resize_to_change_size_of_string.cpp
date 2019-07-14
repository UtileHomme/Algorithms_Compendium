#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s;

    getline(cin,s);

    cout<<s<<endl;

    s.resize(6);

    cout<<s;


    return 0;
}
