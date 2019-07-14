// https://www.geeksforgeeks.org/strcat-vs-strncat-c/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char dest[50] = "This is an ";
  char src[50] = "to show working of strncat() this is not added";

  strncat(dest, src, 29);

  cout<<dest<<endl;

  return 0;
}
