// https://www.geeksforgeeks.org/function-copy-string-iterative-recursive/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void Copy(char str1[], char str2[])
{

  /*

  int i = 0;
  for (i=0; s1[i] != '\0'; i++)
  s2[i] = s1[i];
  s2[i] = '\0';

  */

  int i1=0,i2=0;
  while(str1[i1]!='\0')
  {
    str2[i2] = str1[i1];
    i1++;
    i2++;
  }
  str2[i2]='\0';
}

int main()
{
  char str1[100]= "GeeksForGeeks";
  char str2[100]= "";

  Copy(str1, str2);

  cout<<str2;

  return 0;
}
