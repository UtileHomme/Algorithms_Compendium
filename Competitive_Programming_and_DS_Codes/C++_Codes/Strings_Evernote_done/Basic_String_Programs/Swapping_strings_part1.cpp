// https://www.geeksforgeeks.org/?p=5276

#include <iostream>

using namespace std;

void swap(char **str1_ptr, char **str2_ptr)
{
  char *temp = *str1_ptr;
  *str1_ptr = *str2_ptr;
  *str2_ptr = temp;
}

int main()
{
  char *str1 = "geeks";
  char *str2 = "forgeeks";

  swap(&str1, &str2);

  cout<<str1<<" "<<str2;

  return 0;
}

/*

If we are using character pointers for strings (not arrays), then change str1 and str2 to point to each other's data , i.e, swap pointers.

- If we want to change pointer (and we want the changes to be reflected outside the fucntion), we need to pass a pointer to the pointer

** This method can not be applied if strings are stored using character arrays

*/
