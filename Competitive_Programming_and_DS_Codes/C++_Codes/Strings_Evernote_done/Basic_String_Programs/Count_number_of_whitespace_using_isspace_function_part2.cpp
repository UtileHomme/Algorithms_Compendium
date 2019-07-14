// https://www.geeksforgeeks.org/isspace-in-c-and-its-application-to-count-whitespace-characters/

#include <cctype>
#include <cstring>
#include <iostream>

using namespace std;

void space(string &str)
{
  int cnt = 0;
  int length = str.length();

  for(int i=0;i<length;i++)
  {
    int c = str[i];

    if(isspace(c))
    {
      cnt++;
    }
  }
  cout<<cnt;
}

int main()
{
  string str = "Geeks for geeks";
  space(str);

  return 0;
}
