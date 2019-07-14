// https://www.interviewbit.com/problems/count-and-say/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  string countAndSay(int n)
  {
    if(n==0)
    {
      return "";
    }
    if(n==1)
    {
      return "1";
    }


    string prev = "1";

    string current = prev;

    for(int i=2;i<=n;i++)
    {
      current.clear();

      for(int j=0;j<prev.length();j++)
      {
        int cnt=1;

        while((j+1<prev.length()) && (prev[j]==prev[j+1]))
        {
          cnt++;
          j++;
        }

        current.append(to_string(cnt)+prev[j]);
      }

      prev = current;
    }

    return current;
  }
};

int main()
{
  Solution s;

  int k = 5;

  string res = s.countAndSay(k);

  cout<<res;

  return 0;
}
