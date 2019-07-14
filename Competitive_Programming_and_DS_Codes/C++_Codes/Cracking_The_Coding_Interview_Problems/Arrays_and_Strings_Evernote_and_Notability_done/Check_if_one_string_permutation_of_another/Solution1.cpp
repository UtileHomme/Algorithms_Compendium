// Problem 1.2 (Page 60)

// Check Permutation
// Given two strings, write a method to decide if one is a permutation of the other


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPermutation(string s1, string s2)
{
  sort(s1.begin(),s1.end());
  sort(s2.begin(),s2.end());

  if(s1.length()!=s2.length())
  {
    return false;
  }
  else
  {
    for(int i=0;i<s1.length();i++)
    {
      if(s1[i]!=s2[i])
      {
        return false;
      }
    }
  }

  return true;
}

int main()
{
  string s1= "hello";
  string s2 = "lehlo";

  bool test = isPermutation(s1,s2);

  cout<<s1<<" and "<<s2<<" permutation matching result is "<<test<<endl;

  return 0;
}
