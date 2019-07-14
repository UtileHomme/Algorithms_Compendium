// https://www.interviewbit.com/problems/reverse-the-string/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  void reverseWords(string &s)
  {
    vector <string> a;

    string curr = "";

    for(int i=0;i<s.length();i++)
    {
      // if there exists a space
      if(s[i]==' ')
      {
        //if it is not the first space and the curr word has characters
        if(curr!="")
        {
          a.push_back(curr);
        }
        curr="";
      }
      else
      {
        //add the character to the curr word
        curr = curr + s[i];
      }
    }

    //accommodate the last word
    if(curr!="")
    {
      a.push_back(curr);
    }

    reverse(a.begin(), a.end());

    s = "";

    // each index of 'a' has the word
    //insert a space after every index iteration
    for(int i=0; i<a.size()-1;i++)
    {
      s = s + a[i] + ' ';
    }

    s = s + a.back();

    for(int i=0;i<s.length();i++)
    {
      cout<<s[i];
    }

  }
};

int main()
{
  Solution s;

  string A = " The blue sky   wails ";

  s.reverseWords(A);

  return 0;
}
