// https://www.geeksforgeeks.org/char-vs-stdstring-vs-char-c/

#include <iostream>

using namespace std;

int main()
{
  char *str = "Hello";

  const char* str1 = "Hello";

  //won't work because constant string 
  str[1] = 'o';

  cout<<str<<endl;

  return 0;
}

/*

This works fine in C but writing in this form is a bad idea in c++
- In c++, strings are constant array of char

Syntax

const char*str = "This is GeeksForGeeks";

*/
