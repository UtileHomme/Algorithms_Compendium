#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    //initializing a string into the variable "str1"
    string str1("first string");

    //initializing a variable with the string value of another variable
    string str2(str1);

    //initializing a variable with a char value along with the number of times we wish to add that character into that variable

    //first argument - no. of times , second argument - type of value
    string str3(5, '#');

    //start from the 6th character of the string and print the next 6 characters
    string str4(str1, 6,6);

    //start from the starting of the string using the "begin" function and
    //print the next 5 characters
    string str5(str2.begin(), str2.begin() + 5);

    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;
    cout<<str4<<endl;
    cout<<str5<<endl;

    // How to assign a variable value to another variable

    string str6 = str4;

    cout<< str6<<endl;

    // How to clear all the characters from a string in one go

    str4.clear();

    // How to print the length of a string

    // we call also use "size" function
    int len = str6.length();

    cout<<"length of the string str6 is "<<len<<endl;

    // How to access a particular character at a position

    char ch = str6.at(2);

    cout<<ch<<endl;

    // How to return the first and the last character of a string

    // char ch_f = str6.front();
    // char ch_b = str6.back();
    //
    // cout<<"First_char is :" << ch_f<<" Last char is: "<<ch_b;

    // How to append a string to the present string

    str6.append(" extension");

    //start from the first position of str6 and append 6 characters from there
    str3.append(str6, 0 ,6);

    cout<<str6<<" "<<str3;

    // How to find "substring" from a string

    //start from index and print the next characters
    cout<<str6.substr(7,3);

    //  erase(a, b) deletes b character at index a
    str6.erase(7, 4);
    cout << str6 << endl;

    //  iterator version of erase
    str6.erase(str6.begin() + 5, str6.end() - 3);
    cout << str6 << endl;

    // How to replace a part of the string with another substring

    //  replace(a, b, str)  replaces b character from a index by str
    str6.replace(2, 7, "ese are test");

    cout << str6 << endl;

    return 0;
}
