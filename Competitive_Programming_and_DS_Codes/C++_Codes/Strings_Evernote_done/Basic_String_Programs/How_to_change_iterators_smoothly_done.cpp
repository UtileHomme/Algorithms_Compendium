// https://www.geeksforgeeks.org/stdstring-class-in-c/

#include <iostream>
#include <string>
#include <iterator>

using namespace std;

int main()
{

    string s = "jatin";

    cout<<s<<endl;

    std::string::iterator i;
    std::string::reverse_iterator j;

    //displaying the string using iterators
    for(i=s.begin(); i!=s.end();i++)
    {
        cout<<*i;
    }

    cout<<endl;
    //displaying the string using reverse iterators
    for(j=s.rbegin(); j!=s.rend();j++)
    {
        cout<<*j;
    }

    return 0;
}
