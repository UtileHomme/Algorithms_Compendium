// Problem 1.2 (Page 60)

// Check Permutation
// Given two strings, write a method to decide if one is a permutation of the other


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPermutation(const string &s1, const string &s2)
{
  int count[256];

  if(s1.length()!=s2.length())
  {
      return false;
  }


  for(int i=0;i<s1.length();i++)
  {
    int val = s1[i];

    count[val]++;
  }

  for(int i=0;i<s2.length();i++)
  {
    int val = s2[i];

    count[val]--;

    if(count[val]<0)
    {
      return false;
    }
  }

  return true;
}

int main()
{
  string s1= "hello";
  string s2 = "lehlj";

  bool test = isPermutation(s1,s2);

  cout<<s1<<" and "<<s2<<" permutation matching result is "<<test<<endl;

  return 0;
}
