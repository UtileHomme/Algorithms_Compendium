// https://www.interviewbit.com/problems/reverse-the-string/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  void reverseWords(string &A)
  {
    string ans="";
    string curr="";

    for(int i=A.length()-1;i>=0;i--)
    {
      if(A[i]==' ')
      {
        //we have encountered a space and the current is empty
        if(curr.length()==0)
        {
          continue;
        }

        reverse(curr.begin(), curr.end());

        //already a word exists so add another word with a space in between
        if(ans.length()>0)
        {
          ans.push_back(' ');
        }

        //add the current word to the already generated answer
        ans +=curr;

        //reassign empty to the current word so that a new current word can be added
        curr="";
        continue;
      }

      //We didn't encounter a space so we add the character to the current
      curr.push_back(A[i]);
    }

    //we've reached the end of the string and there is no space at the end
    //we need to add the current word to the answer which couldn't be done above
    if(curr.length()>0)
    {
      reverse(curr.begin(), curr.end());

      if(ans.length()>0)
      {
        ans.push_back(' ');
      }
      ans = ans+curr;
    }

    A = ans;

    for(int i=0;i<A.length();i++)
    {
      cout<<A[i];
    }


    return;
  }
};

int main()
{
  Solution s;

  string A = " The blue sky   wails ";

  s.reverseWords(A);

  return 0;
}
