#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s;

    getline(cin,s);

    cout<<s<<endl;

    s.shrink_to_fit();

    cout<<s;


    return 0;
}
