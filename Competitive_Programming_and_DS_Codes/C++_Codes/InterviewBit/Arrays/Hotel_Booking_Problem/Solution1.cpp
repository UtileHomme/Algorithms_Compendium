// https://www.interviewbit.com/problems/hotel-bookings-possible/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  bool hotel(vector <int> &arrive, vector<int> &depart, int K)
  {
    vector <pair <int, int>> ans;

    for(int i=0;i<arrive.size();i++)
    {
      ans.push_back(make_pair(arrive[i], 1));
      ans.push_back(make_pair(depart[i], 0));
    }

    sort(ans.begin(), ans.end());

    int curr_active=0, max_active=0;

    for(int i=0;i<ans.size();i++)
    {
      if(ans[i].second==1)
      {
        curr_active++;
        max_active= max(max_active, curr_active);
      }
      else
      {
        curr_active--;
      }
    }

    return (K>=max_active);
  }
};

int main()
{
  Solution s;

  vector <int> arrive = {1,3,5, 2};
  vector <int> depart = {2,6,8, 9};

  int k = 2;

  bool l = s.hotel(arrive, depart, k);

  cout<<l;
  return 0;
}
