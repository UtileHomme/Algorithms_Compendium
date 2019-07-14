<!-- This is how we declare and print a string -->

int main()
{
    char str[] = "Geeks";
    cout<<str;

    return 0;
}

<!-- This is how we read a string from the user -->

int main()
{
    char str[50];
    cin>>str;

    cout<<str;
    return 0;
}

<!-- This is how we pass string to a function -->

void printStr(char str[])
{
    cout<<"String is "<<str;
}

int main()
{
    char str[] = "GeeksforGeeks";

    printStr(str);

    return 0;
}

<!-- How to use "getline" to receive a space separated string -->

int main()
{
    string str;

    getline(cin,str);

    cout<<str;
}

<!-- How to use "push_back" function to add a character at the end of a string -->

int main()
{
    string str;

    getline(cin,str);

    str.push_back('c');
    cout<<str;
    return 0;
}

<!-- How to use getline when we have spaces in between each sentence -->

- "getline" will read data till it encounters a "newline" or "delimiter" specified by the user

Problem Eg -
// A simple C++ program to show working of getline
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str;
    int t = 4;
    while (t--)
    {
        // Read a line from standard input in str
        getline(cin, str);
        cout << str << " : newline" << endl;
    }
    return 0;
}

Input:
This

is

Geeks

for

Output:
This : newline
 : newline
is  : newline
 : newline

- When "Enter" is pressed, the next line whether a sentence or a blank line will be considered as a new line by "getline" function

Solution Eg-

// A simple C++ program that uses getline to read
// input with blank lines
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str;
    int t = 4;
    while (t--)
    {
        getline(cin, str);

        // Keep reading a new line while there is
        // a blank line
        while (str.length()==0 )
            getline(cin, str);

        cout << str << " : newline" << endl;
    }
    return 0;
}
