// https://www.interviewbit.com/problems/mathbug02/


#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  vector <vector <int>> PairSum(int A)
  {
    vector <vector <int>> ans;

    if(A<=0 && A>=10000)
    {
      return ans;
    }

    for(int a=1; (a*a)<A; a++)
    {
      for(int b=a; (b*b)<A;b++)
      {
        if(((a*a)+(b*b))==A)
        {
          vector <int> newentry;
          newentry.push_back(a);
          newentry.push_back(b);

          ans.push_back(newentry);
        }
      }

    }

    return ans;
  }
};

int main()
{
  Solution s;

  int A = 1105;

  vector <vector <int>> l;
  l = s.PairSum(A);

  for(int i=0;i<l.size();i++)
  {
    for(int j=0;j<l[i].size();j++)
    {
      cout<<l[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}
