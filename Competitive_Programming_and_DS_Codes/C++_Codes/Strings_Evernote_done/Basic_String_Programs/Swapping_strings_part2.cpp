// https://www.geeksforgeeks.org/?p=5276

#include <iostream>
#include <string.h>

using namespace std;

void swap(char *str1, char *str2)
{
  int len = strlen(str1);
  char *temp = new char[len+1];

  strcpy(temp, str1);
  strcpy(str1, str2);
  strcpy(str2, temp);

  free(temp);
}

int main()
{
  char str1[10] = "geeks";
  char str2[10] = "forgeeks";

  swap(str1, str2);

  cout<<str1<<" "<<str2;

  return 0;
}

/*

** This method can not be applied for strings stored in read only block of memory
*/
