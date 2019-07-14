// Reference - https://www.geeksforgeeks.org/tokenizing-a-string-cpp/]
// Reference - https://stackoverflow.com/questions/3889992/how-does-strtok-split-the-string-into-tokens-in-c

#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

int main()
{
  char str[] = "Geeks-for-Geeks";

  char *token = strtok(str, "-");
    while(token!=NULL)
    {
      cout<<token<<endl;


      token = strtok(NULL,"-");

    }
}
