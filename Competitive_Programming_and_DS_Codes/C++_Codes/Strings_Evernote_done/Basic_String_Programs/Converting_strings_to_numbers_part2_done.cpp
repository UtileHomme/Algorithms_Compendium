// https://www.geeksforgeeks.org/converting-strings-numbers-cc/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string str1 = "45";
    string str2 = "3.14159";
    string str3 = "31337 geek";

    int myint1 = stoi(str1);
    int myint2 = stoi(str2);
    int myint3 = stoi(str3);

    cout<<myint1<<" "<<myint2<<" "<<myint3<<endl;

    return 0;
}
