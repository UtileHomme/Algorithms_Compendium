// https://www.interviewbit.com/problems/hotel-bookings-possible/

// https://www.geeksforgeeks.org/find-k-bookings-possible-given-arrival-departure-times/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  bool hotel(vector <int> &arrive, vector<int> &depart, int K)
  {
    sort(arrive.begin(), arrive.end());
    sort(depart.begin(), depart.end());

    int k=0,i=0,j=0;

    while(i<arrive.size() && j<depart.size())
    {
      if(arrive[i]<depart[j])
      {
        k++;
        i++;
      }
      else if(arrive[i]>depart[j])
      {
        k--;
        j++;
      }
      else
      {
        i++;
        j++;
      }

      if(k>K)
      {
        return false;
      }
    }

    return true;
  }
};

int main()
{
  Solution s;

  vector <int> arrive = {1,3,5};
  vector <int> depart = {2,6,8};



  int k = 3;

  bool l = s.hotel(arrive, depart, k);

  cout<<l;
  return 0;
}
