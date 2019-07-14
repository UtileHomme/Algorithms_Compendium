// https://www.geeksforgeeks.org/?p=5276

#include <iostream>

using namespace std;

void swap(char *str1, char *str2)
{
  char *temp = str1;
  str1 = str2;
  str2 = temp;
}

int main()
{
  char *str1 = "geeks";
  char *str2 = "forgeeks";

  swap(str1, str2);

  cout<<str1<<" "<<str2;

  return 0;
}

/*

This approach doesn't swap strings. The function just changes local pointer variables and the changes are not reflected outside the function

*/
