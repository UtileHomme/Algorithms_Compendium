// https://www.geeksforgeeks.org/stdstringat-in-c/

#include <iostream>

using namespace std;

void atDemo(string str)
{
  cout<<str.at(5);
}

int main()
{
  string str("GeeksForGeeks");

  atDemo(str);

  return 0;
}
