// https://www.geeksforgeeks.org/strchr-function-in-cpp/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{

  char str[] = "This is a string";

  char *ch = strrchr(str,'a');

  cout<<ch-str+1;

  return 0;
}
