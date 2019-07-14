// Problem 1.3 CCI Page 60

/*

URLify:
Write a method to replace all spaces in a string with '%20'.
One may assume that the string has sufficient space at the end to hold the additional characters, and that we are given the "true" length of the string.

*/

// Reference - https://www.geeksforgeeks.org/urlify-given-string-replace-spaces/

#include <iostream>
#include <cstring>

using namespace std;

void replaceSpace(char *str, int len)
{
  int cnt_space=0;;
  for(int i=0;i<len;i++)
  {
    if(str[i]==' ')
    {
      cnt_space++;
    }
  }

  int new_len = len + (2*cnt_space);

  int k = new_len - 1;

  for(int j=len-1;j>=0;j--)
  {
    if(str[j]!=' ')
    {
      str[k--] = str[j];
    }
    else
    {
      str[k] ='0';
      str[k-1] ='2';
      str[k-2] ='%';
      k = k-3;
    }
  }
}

int main()
{
  char s[] = "Mr John Smith    ";

  cout<<"Old string "<<s<<endl;

  replaceSpace(s, 13);

  cout<<"New string "<<s<<endl;

  return 0;
}

/*

Time Complexity = O(n) where "n" is the true length of the string

Auxilliary Space = O(1) because of inplace algorithm

*/
