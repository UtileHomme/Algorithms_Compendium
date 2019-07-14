#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s;

    getline(cin,s);

    cout<<s<<endl;

    s.pop_back();

    cout<<s;


    return 0;
}
