// https://www.interviewbit.com/problems/flip/

#include <iostream>
#include <cstring>
#include <vector>
#include <climits>

using namespace std;

class Solution
{
public:

  vector <int> flip(string A)
  {
    int len = A.length();

    int s = -1, e = -1, ef=-1, sf=-1, d=0, ld=0;

    vector <int> result;

    for(int i=0;i<len;i++)
    {
      if(A[i]=='0')
      {
        d++;
        if(s==-1)
        {
          s=i;
        }
        e = i;
      }

      else
      {
        d--;
        if(d<0)
        {
          s=-1;
          e=-1;
          d=0;
        }
        else
        {
          e=i;
        }
      }

      if(ld<d)
      {
        ld = d;
        sf = s;
        ef = e;
      }
    }

    if(ld>0)
    {
      result.push_back(sf+1);
      result.push_back(ef+1);
    }

    return result;
  }
};

int main()
{
  Solution s;

  string S = "01011101";

  vector <int> res;

  res = s.flip(S);

  for(int i=0;i<res.size();i++)
  {
    cout<<res[i]<<" ";
  }
}
