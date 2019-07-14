// https://www.geeksforgeeks.org/stringstream-c-applications/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int countWords(string str)
{
  stringstream s(str);

  string word;

  int count = 0;

  while(s>>word)
  {
    count++;
  }

  return count;
}

int main()
{
  string s="geeks for geeks geeks";

  cout<<"Number of words are: "<<countWords(s);
}
