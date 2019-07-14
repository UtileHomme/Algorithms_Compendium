// https://www.geeksforgeeks.org/?p=21

#include <iostream>
#include <string.h>
#include <algorithm>
#include <set>
#define bool int

using namespace std;

char *removeDuplicates(char *str, int n)
{
  int i2=1, i1=1;

  while(*(str+i1))
  {
    if(*(str+i1)!=*(str+i1-1))
    {
      *(str+i2) = *(str+i1);
      i2++;
    }

    i1++;
  }

  *(str+i2) = '\0';
  return str;
}

int main()
{

  char str[] = "naman";
  int n = strlen(str);

  sort(str,str+n);

  cout<<removeDuplicates(str,n);

  cout<<endl;
  return 0;
}
