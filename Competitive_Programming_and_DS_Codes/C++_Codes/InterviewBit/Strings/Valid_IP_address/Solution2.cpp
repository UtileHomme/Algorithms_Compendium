// https://www.interviewbit.com/problems/valid-ip-addresses/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  bool isValid(string s)
  {
    if(s.size()>1 && s[0]=='0')
    {
      return false;
    }
    if(stoi(s)<=255 && stoi(s)>=0)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  vector <string> restoreIpAddresses(string s)
  {
    vector <string> ans;

    if(s.size()>12 || s.size()<4)
    {
      return ans;
    }

    for(int i=1; i<4;i++)
    {
      string first = s.substr(0,i);

      //if the first iteration number is not valid
      //move to the next iteration
      if(!isValid(first))
      {
        continue;
      }

      // Eg - 2454
      //i=2 and j=2; the sum is more than the size of the string
      //therefore no need to carry out this iteration further
      for(int j=1; i+j<s.size() && j<4;j++)
      {
        string second = s.substr(i,j);

        if(!isValid(second))
        {
          continue;
        }

        for(int k=1; i+j+k<s.size() && k<4; k++)
        {
          string third = s.substr(i+j,k);
          string fourth = s.substr(i+j+k);

          if(isValid(third) && isValid(fourth))
          {
            string current = first + "." + second + "." + third + "." + fourth;
            ans.push_back(current);
          }
        }
      }
    }

    return ans;
  }
};

int main()
{
  Solution s;

  string k = "255255";

  vector <string> A = s.restoreIpAddresses(k);

  for(int i=0; A.size();i++)
  {
    cout<<A[i];
    cout<<endl;
  }
}
