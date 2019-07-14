// https://www.geeksforgeeks.org/convert-string-char-array-cpp/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  string s = "GeeksforGeeks";

  int n = s.length();

  char char_array[n+1];

  strcpy(char_array, s.c_str());

  for(int i=0;i<n;i++)
  {
    cout<<char_array[i];
  }
  return 0;
}

/*

The "c_str" function is used to return a pointer to an array that contains a null terminated sequence of characters representing the current value of the string

*/
