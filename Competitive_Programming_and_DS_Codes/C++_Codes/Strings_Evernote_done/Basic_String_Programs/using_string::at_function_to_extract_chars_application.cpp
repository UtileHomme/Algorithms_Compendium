// https://www.geeksforgeeks.org/stdstringat-in-c/

#include <iostream>

using namespace std;

void extractChar(string str)
{
  char ch;

  int l = str.length();

  for(int i=0;i<l;i++)
  {
    ch = str.at(i);
    cout<<ch<<" ";
  }
}

int main()
{
  string str("GeeksForGeeks");

  extractChar(str);

  return 0;
}
