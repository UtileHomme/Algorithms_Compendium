// Reference - https://www.geeksforgeeks.org/tokenizing-a-string-cpp/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{

  char gfg[100] = "Geeks - for - geeks - Contribute";

  const char s[4] = " - ";

  char *tok;

  tok = strtok(gfg, s);

  while(tok!=0)
  {
    cout<<tok<<endl;

    tok = strtok(0,s);
  }

  return 0;
}
