// https://www.interviewbit.com/problems/maximum-consecutive-gap/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int maximumGap(const vector<int> &num)
  {
    if(num.empty() || num.size() < 2)
    return 0;

    //the elements are pushed in descending order
    priority_queue <int> q;

    for(auto &y:num)
    {
      q.push(y);
    }

    int m = 0;

    int tp = q.top();

    q.pop();

    while(!q.empty())
    {
      int x = q.top();
      q.pop();

      m = max(m, tp-x);
      tp = x;
    }

    return m;
  }
};

int main()
{
  vector <int> A = {3,7,1,13,8};

  Solution s;

  int k = s.maximumGap(A);

  cout<<k;

  return 0;
}
