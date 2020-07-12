// https://www.geeksforgeeks.org/char-vs-stdstring-vs-char-c/

#include <iostream>

using namespace std;

int main()
{
  char *str1 = "This is GeeksforGeeks";

  cout<<str1<<endl;

  int size = 30;

  char *str2 = new char[size];

  str2 = "GeeksForGeeks For Everyone";

  cout<<str2;

  return 0;
}

/*

This works fine in C but writing in this form is a bad idea in c++
- In c++, strings are constant array of char

Syntax

const char*str = "This is GeeksForGeeks";

*/
