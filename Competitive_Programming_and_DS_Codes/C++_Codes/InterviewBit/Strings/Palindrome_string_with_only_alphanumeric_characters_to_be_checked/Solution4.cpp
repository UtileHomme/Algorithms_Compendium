// https://www.interviewbit.com/problems/palindrome-string/

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  bool isalphanum(char a)
  {
    if((a>='a' && a<='z' ) || (a>='A' && a<='Z') || (a>='0' && a<='9'))
    {
        return true;
    }
    else
    {
      return false;
    }
  }

  char to_lower(char a)
  {
    if(a>='A' && a<='Z')
    {
      a = a - 'A' + 'a';
    }

    return a;
  }

  int isPalindrome(string A)
  {
    string s = "";

    int l = A.size();
    for(int i=0;i<l;i++)
    {
      if(isalphanum(A[i]))
      {
        s += to_lower(A[i]);
      }
    }
      string r = s;

      reverse(r.begin(), r.end());

      cout<<s<<" "<<r<<endl;

      if(s==r)
      {
        return 1;
      }
      else
      {
        return 0;
      }
    }
};

int main()
{
  Solution s;

  string A = "race a car";
  int k = s.isPalindrome(A);

  cout<<k;
  return 0;
}
