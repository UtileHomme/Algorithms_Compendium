// Problem 1.1 (Page 60)

// Is Unique:
// Implement an algorithm to determine if a string has all unique characters. What if we cannot use addition datastructures?


//using bool vector array

#include <iostream>
#include <vector>

using namespace std;

bool isUnique(const string &str)
{

  if(str.length()>128)
  {
    return false;
  }

  vector <bool> char_set(128);

  for(int i=0;i<str.length();i++)
  {
    int integerval = str[i];

    if(char_set[integerval]==true)
    {
      return false;
    }

    char_set[integerval] = true;
  }

  return true;
}

int main()
{
  vector <string> str{"abcde", "jatin", "sangita"};

  for(auto i : str)
  {
    cout<<i<<" uniqueness value is "<<isUnique(i)<<endl;
  }

  return 0;
}
