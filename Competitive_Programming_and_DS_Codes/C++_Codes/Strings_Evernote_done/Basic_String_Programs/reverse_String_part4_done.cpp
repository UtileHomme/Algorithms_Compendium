// https://www.geeksforgeeks.org/reverse-a-string-in-c-cpp-different-methods/

#include<string.h>
#include <iostream>

using namespace std;

char *reverse(char const *str)
{
  int start, end, len;
  char temp, *ptr=NULL;

  len = strlen(str);

  ptr = new char[len];

  ptr = strcpy(ptr,str);

  for(start=0,end=len-1; start<=end;start++,end--)
  {
    temp = ptr[start];
    ptr[start] = ptr[end];
    ptr[end] = temp;
  }

  return ptr;
}

int main()
{
    char const *str = "GeeksforGeeks";
    char *ptr = reverse(str);
    cout<<ptr;
    return 0;
}
