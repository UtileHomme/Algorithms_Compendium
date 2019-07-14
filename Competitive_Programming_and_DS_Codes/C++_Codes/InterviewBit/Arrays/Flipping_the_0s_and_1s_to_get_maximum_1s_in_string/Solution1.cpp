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

    vector <int> B(len);

    for(int i=0;i<len;i++)
    {
      if(A[i]=='1')
      {
        B[i]=-1;
      }
      else
      {
        B[i]=1;
      }
    }

    pair <int,int> ans = make_pair(INT_MAX, INT_MAX);

    int curr_sum = 0 , max_sum = 0, low=0;

    for(int i=0;i<len;i++)
    {
      if(curr_sum+B[i]<0)
      {
        low = i+1;
        curr_sum = 0;
      }

      else
      {
        curr_sum += B[i];
      }

      if(curr_sum>max_sum)
      {
        max_sum = curr_sum;
        ans.first = low;
        ans.second = i;
      }
    }

    if(ans.first==INT_MAX)
    {
      return vector<int>();
    }

    vector <int> result;
    result.push_back(ans.first+1);
    result.push_back(ans.second+1);

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
