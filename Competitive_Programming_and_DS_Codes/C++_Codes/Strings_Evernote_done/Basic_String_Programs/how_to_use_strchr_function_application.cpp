// https://www.geeksforgeeks.org/strchr-function-c-applications/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{

  char str[] = "My name is Ayush";

  char ch='A', ch2 ='z';

  if(strchr(str,ch)!=NULL)
  {
    cout<<ch<<" "<<"is present in string"<<endl;
  }
  else
  {
    cout<<ch<<" "<<"is not present in string"<<endl;
  }

  return 0;
}
