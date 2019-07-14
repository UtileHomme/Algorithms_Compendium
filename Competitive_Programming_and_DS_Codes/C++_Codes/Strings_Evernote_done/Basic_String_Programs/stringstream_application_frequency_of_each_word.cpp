// https://www.geeksforgeeks.org/stringstream-c-applications/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printFrequency(string st)
{
  map <string, int> FW;

  stringstream ss(st);

  string word;

  while(ss>>word)
  {
    FW[word]++;
  }

  map<string,int>::iterator m;

  for(m=FW.begin(); m!=FW.end();m++)
  {
    cout<<m->first<<"->"<<m->second<<endl;
  }
}

int main()
{
  string s="geeks for geeks geeks";

  printFrequency(s);
}

/*
How "stringstream ss works"

Reference (Comments ) - https://www.geeksforgeeks.org/unordered_map-in-stl-and-its-applications/

ss is an object of stringstream. When you pass it a string let's say "geeks for geeks is awesome". In the first call of ss >> word the first word i.e. "geeks" would be stored in the word and the rest string "for geeks is awesome" remains in the ss buffer. In the next iteration "for" would be stored in word and so on. Since wordFreq is of unordered_map type wordFreq[word] accesses that particular word(key) in the map and increments the value stored at that key

*/
