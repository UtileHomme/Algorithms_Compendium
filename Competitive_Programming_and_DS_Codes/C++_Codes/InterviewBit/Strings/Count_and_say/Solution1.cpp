// https://www.interviewbit.com/problems/count-and-say/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  string countAndSay(int n)
  {
    if(n==1)
    {
      return "1";
    }

    if(n==2)
    {
      return "11";
    }

    string str = "11";

    for(int i=3;i<=n;i++)
    {
      //this is done because we have to compare the last element to its previous
      //it is the previous and its count that we are adding
      //Consider the example of "21"
      str += '$';

      int len = str.length();

      int cnt = 1;

      string temp = "";

      for(int j=1;j<len;j++)
      {
        if(str[j]!=str[j-1])
        {
          // to convert the integer into string
          temp += cnt + '0';

          temp += str[j-1];

          cnt = 1;
        }
        else
        {
          cnt++;
        }

      }

      str = temp;
    }

    return str;
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
