// https://www.interviewbit.com/problems/valid-ip-addresses/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  vector <string> restoreIpAddresses(string s)
  {
    vector <string> ret;

    string ans;

    for(int a=1; a<=3;a++)
    {
      for(int b=1; b<=3; b++)
      {
        for(int c=1; c<=3; c++)
        {
          for(int d=1; d<=3; d++)
          {
            if(a+b+c+d==s.length())
            {
              //extract from position 0, no of elements = a
              int A = stoi(s.substr(0, a));

              //extract from position "a", no of elements = b

              int B = stoi(s.substr(a, b));

              //extract from position "a+b", no of elements = c
              int C = stoi(s.substr(a+b, c));

              //extract from position "a+b+c", no of elements = d
              int D = stoi(s.substr(a+b+c, d));

              //the numbers must be less than 255
              if (A<=255 && B<=255 && C<=255 && D<=255)
              {
                //the combined length should be equal to the length of original string + 3
                //"3" is added because of the three extra "."
                if ((ans=to_string(A)+"."+to_string(B)+"."+to_string(C)+"."+to_string(D)).length() == s.length()+3)
                {
                  ret.push_back(ans);
                }
              }
            }
          }
        }
      }
    }

    return ret;
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
