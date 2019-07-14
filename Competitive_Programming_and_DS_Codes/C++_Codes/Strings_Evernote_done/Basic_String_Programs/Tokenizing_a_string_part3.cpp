// Reference - https://www.geeksforgeeks.org/tokenizing-a-string-cpp/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{

  char str[] = "Geeks for Geeks";
  char *token;

  char *rest = str;

  while((token = strtok_r(rest, " ",&rest)))
  {
  cout<<token<<endl;
  }

  return 0;
}
