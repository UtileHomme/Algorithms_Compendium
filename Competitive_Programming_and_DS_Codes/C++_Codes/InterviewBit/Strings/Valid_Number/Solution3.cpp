// https://www.interviewbit.com/problems/valid-number/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int isNumber(const string &s)
  {
    unordered_map <char,int> mapp;

    int n = s.size();

    bool flag = false;

    for(int i=0;i<s.length();i++)
    {
      //if a "sign" or a "space" is encountered in the beginning
      if(s[i]==' ' || s[i]=='+' || s[i]=='-')
      {
        continue;
      }

      //if the first character is not a digit, not a decimal
      //and not a "e", that means it is either a space or some other character
      if(!isdigit(s.at(i)) && s[i]!='.' && s[i]!='e')
      {
        return 0;
      }

      //if the "e" comes before the decimal has occured or it comes multiple times
      if(s[i]=='e' && mapp.find(s[i])!=mapp.end())
      {
        return 0;
      }

      //if the decimal occurs multiple times
      if(s[i]=='.' && mapp.find(s[i])!=mapp.end())
      {
        return 0;
      }

      //if a decimal occurs after an 'e'
      if(s[i]=='.' && mapp.find('e')!=mapp.end())
      {
        return 0;
      }

      //add the character as the key and it's corresponding position as the key value
      mapp[s[i]]=i;
      flag = true;
    }

    //if the 'e' occurs at the last position
    if(mapp.find('e')!=mapp.end())
    {
      if(mapp['e']==n-1)
      {
        return 0;
      }
    }

    //if the '.' occurs at the last position
    if(mapp.find('.')!=mapp.end() && mapp['.']==n-1)
    {
      return 0;
    }

    //if there is not digit after the decimal
    if(mapp.find('e')!= mapp.end() && mapp['.']<n-1)
    {
      int x = mapp['.'];
      if(!isdigit(s.at(x+1)))
      {
        return 0;
      }
    }

    return flag? 1:0;
  }

};

int main()
{
  Solution s;

  string A = "+0.1e-10";

  int k = s.isNumber(A);

  cout<<k;
}
