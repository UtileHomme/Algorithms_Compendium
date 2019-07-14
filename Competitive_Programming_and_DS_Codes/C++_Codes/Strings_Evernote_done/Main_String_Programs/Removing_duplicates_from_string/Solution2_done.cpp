// https://www.geeksforgeeks.org/?p=21

#include <iostream>
#include <string.h>
#include <set>

using namespace std;

char *removeDuplicates(char str[], int n)
{
  int index = 0;

  set <char> s(str, str+n-1);

  for(auto x:s)
  {
    str[index++]= x;
  }

  str[index] = '\0';
  return str;
}

int main()
{

  char str[] = "naman";
  int n = sizeof(str)/sizeof(str[0]);

  cout<<removeDuplicates(str,n);

  cout<<endl;
  return 0;
}
