// https://www.geeksforgeeks.org/?p=21

#include <iostream>
#include <string.h>

using namespace std;

char *removeDuplicates(char str[], int n)
{
  int index = 0,i,j;


  for(i=0;i<n;i++)
  {
    for(j=0;j<i;j++)
    {
      if(str[i]==str[j])
      {
        break;
      }
    }

    if(i==j)
    {
      str[index++] = str[i];
    }

  }

  str[index++]='\0';
  return str;
}

int main()
{

  char str[] = "abcaaaa";
  int n = sizeof(str)/sizeof(str[0]);

  cout<<removeDuplicates(str,n);

  cout<<endl;
  return 0;
}
