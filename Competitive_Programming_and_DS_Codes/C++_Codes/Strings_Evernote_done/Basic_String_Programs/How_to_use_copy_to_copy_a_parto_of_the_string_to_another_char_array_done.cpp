// https://www.geeksforgeeks.org/stdstring-class-in-c/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1 = "jatin loves comics";

    char ch[80];

    str1.copy(ch, 13,1);

    cout<<ch<<endl;
}
