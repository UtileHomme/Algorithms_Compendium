// https://www.geeksforgeeks.org/strchr-function-in-cpp/

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{

  char denom[] = "Rs 1000000";

  cout<<"The original string is "<<denom<<endl;

  char first = '1';
  char *entire;

  entire = strrchr(denom, first);

  cout<<"The denomination value is "<<entire;

  return 0;
}
