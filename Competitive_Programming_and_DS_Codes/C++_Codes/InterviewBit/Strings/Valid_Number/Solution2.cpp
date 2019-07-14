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
    //to check for decimals.. should be set only once
    int flag_d=0;

    //to check for '+' or '-' sign.. can be set more than once
    int flag_s=0;

    //to check for exponents.. should be set only once
    int flag_e=0;

    //to check for numbers.. should be set only once
    int flag_n=0;

    //to check for spaces in the middle.. if set that means not a valid number
    int flag_useless=0;

    int k = 0;

    while(s[k]==' ' && k<s.size())
    {
      k++;
    }

    //if there were only spaces
    if(k==s.size())
    {
      return 0;
    }

    for(int i=k; i<s.size();i++)
    {
      if(s[i]=='-' || s[i]=='+')
      {
        if(flag_s==0)
        {
          flag_s=1;
        }
        //before the exponent being set there should not be more than one '-/+' sign
        else if(flag_s==1)
        {
          return 0;
        }
        //if before the sign there was a space, not a valid number
        else if(flag_useless==1)
        {
          return 0;
        }

        //since we have reached the end and there is nothing after the sign
        //not a valid number
        if(i==s.size()-1)
        {
          return 0;
        }
      }

      else if(s[i]=='0' || (s[i]>='1' && s[i]<='9'))
      {
        //if there was a space before the digit, not a valid number
        if(flag_useless==1)
        {
          return 0;
        }

        //set flag as "1" since a number exists
        flag_n = 1;

        //set this as "1" by default since a number always has a "+"
        //sign by default
        if(flag_s==0)
        {
          flag_s=1;
        }
      }

      else if(s[i]=='.')
      {
        //since a decimal is found, set flag as "1"
        if(flag_d==0)
        {
          flag_d=1;
        }
        //if a decimal was encountered earlier and another came up,
        //not a valid number
        else if(flag_d==1)
        {
          return 0;
        }

        //if a space is encountered before the decimal, not a valid no
        if(flag_useless==1)
        {
          return 0;
        }

        //a decimal needs to have another digit after it
        //if the decimal point is the last character, not a valid no
        if(i==s.size()-1)
        {
          return 0;
        }
      }

      else if(s[i]=='e')
      {
        //if 'e' doesn't have any no before it, not a valid no
        if(flag_n==0)
        {
          return 0;
        }
        //if there was already an exponent before, not a valid no
        else if(flag_e==1)
        {
          return 0;
        }
        //before an exponent, there shouldn't be a decimal
        else if(flag_d==1 && s[i-1]=='.')
        {
          return 0;
        }

        //if there are spaces before the exponent, not a valid number
        else if(flag_useless==1)
        {
          return 0;
        }

        //since an exponent has occurred, we can have a "+/-" sign after it
        //but not decimal or another exponent
        //reset the flags accordingly
        else
        {
          flag_s=0;
          flag_e=1;
          flag_d=1;
        }
      }

      //if there occurs a space, set the flag
      //if this occurs, not a valid number provided the space is not at the end
      else if(s[i]==' ')
      {
        flag_useless=1;
      }
      else
      {
        return 0;
      }
    }

    return 1;
  }

};

int main()
{
  Solution s;

  string A = "+0.1e-10 ";

  int k = s.isNumber(A);

  cout<<k;
}
