// https://www.interviewbit.com/problems/3-sum-zero/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  set<vector <int>> threeSumZero(vector <int> &A)
  {
    set<vector<int>> triplets;

    vector <int> triplet(3);

    if(A.size()<2)
    {
      return triplets;
    }

    sort(A.begin(), A.end());

    int size = A.size();

    for(int i=0;i<size;i++)
    {
      int j = i+1;
      int k = size-1;

      while(j<k)
      {
        int sum = A[i]+A[j]+A[k];

        if(sum<0)
        {
          j++;
        }
        else if(sum>0)
        {
          k--;
        }
        else
        {
          triplet[0] = A[i];
          triplet[1] = A[j];
          triplet[2] = A[k];
          triplets.insert(triplet);
          j++;
          k--;
        }
      }
    }

    return triplets;
  }
};

int main()
{
  vector <int> A = {-2, 0, 1, 1, 2};

  Solution s;

  set<vector <int>> B = s.threeSumZero(A);

  set <vector <int>> :: iterator it;

  vector <int> :: const_iterator it1;

  for(it=B.begin(); it!=B.end(); ++it)
  {
    for(it1 = (*it).begin(); it1!=(*it).end(); it1++)
    {
      cout<<*it1<<" ";
    }
    cout<<endl;
  }
  return 0;
}
