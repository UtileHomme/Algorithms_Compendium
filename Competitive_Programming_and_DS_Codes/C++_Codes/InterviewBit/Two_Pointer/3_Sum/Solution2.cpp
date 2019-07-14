// https://www.interviewbit.com/problems/3-sum/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int threeSumClosest(vector <int> &A, int B)
  {
    int minDiff = INT_MAX;

    int sum;

    for(int i=0;i<A.size()-2;i++)
    {
      for(int j=i+1;j<A.size()-1; j++)
      {
        for(int k=j+1; k<A.size();k++)
        {
          int temp = A[i] + A[j] + A[k];

          int diff = temp - B;

          if(diff<minDiff)
          {
            minDiff = diff;
            sum = temp;
          }
        }
      }
    }

    return sum;
  }

};

int main()
{
  vector <int> A = {3,5,2,7,6,-1};
  int B = 5;

  Solution s;

  int k = s.threeSumClosest(A,B);

  cout<<k;

  return 0;
}
