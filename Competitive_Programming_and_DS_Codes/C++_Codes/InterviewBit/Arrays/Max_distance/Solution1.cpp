// https://www.interviewbit.com/problems/max-distance/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int maxGap(const vector <int> &num)
  {
    if(num.size()==0)
    {
      return -1;
    }
    if(num.size()==1)
    {
      return 0;
    }

    vector <pair <int, int>> toSort;

    for(int i=0;i<num.size(); i++)
    {
      toSort.push_back(make_pair(num[i], i));
    }

    sort(toSort.begin(), toSort.end());

    int len = toSort.size();

    int maxIndex = toSort[len-1].second;

    int ans=0;

    for(int i=len-2; i>=0; i--)
    {
      int ans1 = maxIndex - toSort[i].second;

      if(ans1>ans)
      {
        ans = ans1;
      }

      int maxIndex1 = toSort[i].second;

      if(maxIndex1>maxIndex)
      {
        maxIndex = maxIndex1;
      }
    }

    return ans;
  }
};

int main()
{
  Solution s;

  vector <int> num = {3,4,5,2};

  int k = s.maxGap(num);

  cout<<k;
  return 0;
}
