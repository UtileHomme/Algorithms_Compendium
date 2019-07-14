// https://www.geeksforgeeks.org/?p=19364

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool findTriplets(vector <int> &A, int sum)
{

  for(int i=0;i<A.size()-2;i++)
  {
    unordered_set<int> s;

    int curr_sum = sum - A[i];

    for(int j=i+1; j<A.size();j++)
    {
      if(s.find(curr_sum-A[j])!=s.end())
      {
        cout<<A[i]<<" "<<A[j]<<" "<<curr_sum-A[j]<<endl;
        return true;
      }

      s.insert(A[j]);
    }
  }
  return false;
}

int main()
{
  vector <int> A = {1,4,45,6,10,8};

  int sum = 22;

  findTriplets(A, sum);

  return 0;
}
