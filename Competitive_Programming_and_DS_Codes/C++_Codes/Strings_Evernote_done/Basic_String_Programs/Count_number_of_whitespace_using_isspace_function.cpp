// https://www.geeksforgeeks.org/isspace-in-c-and-its-application-to-count-whitespace-characters/

#include <ctype.h>
#include <iostream>

using namespace std;

int main()
{
  char ch=' ';

  if(isspace(ch))
  {
    cout<<"Entered character is space";
  }
  else
  {
    cout<<"Entered character is not space";
  }
}
