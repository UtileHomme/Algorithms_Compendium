// https://www.geeksforgeeks.org/?p=21

#include <iostream>
#include <string.h>
#include <set>
#define bool int

using namespace std;

char *removeDuplicates(char *str, int n)
{
  int i1=0, i2=0;

  bool hash[256]={0};

  while(*(str+i1))
  {
    char temp = *(str+i1);
    if(hash[int(temp)]==0)
    {
      hash[int(temp)]=1;
      str[i2] = str[i1];
      i2++;
    }

    i1++;
  }

  *(str+i2)='\0';

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
