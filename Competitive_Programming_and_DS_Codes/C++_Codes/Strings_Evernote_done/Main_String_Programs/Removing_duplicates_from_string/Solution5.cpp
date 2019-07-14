// https://www.geeksforgeeks.org/?p=229691

#include <iostream>
#include <string.h>
#include <algorithm>
#include <set>
#define bool int

using namespace std;

string removeDuplicates(string str)
{
  //keeps track of the visited characters
  int counter = 0;

  int i=0;
  int size = str.size();

  int x;

  int length = 0;

  while(i<size)
  {
    //calculates it place in the 32 bit string
    x = str[i]-97;

    //1<<x means move 1 to the left by "x" positions
    //if the number at position "x" is not one, this is the first occurence of this character
    if((counter & (1<<x))==0)
    {
      str[length] = 'a'+x;

      //set the occurence to "1"
      counter = counter | (1<<x);

      length++;
    }
    i++;
  }

  return str.substr(0,length);
}

int main()
{

  string str = "geeksforgeeks";

  cout<<removeDuplicates(str);

  cout<<endl;
  return 0;
}
