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
    int l, r;

    sort(A.begin(), A.end());

    int minDiff = INT_MAX;

    int sum;

    for(int i=0;i<A.size()-2;i++)
    {
      l = i+1;
      r = A.size()-1;

      while(l<r)
      {
        int temp = A[i] + A[l] + A[r];

        int diff = abs(temp - B);

        //we've found the sum exactly
        if(diff==0)
        {
          return B;
        }

        //we are trying to minimize the difference between the sum and the target
        if(diff<minDiff)
        {
          minDiff = diff;

          sum = temp;
        }

        if(temp<B)
        {
          l++;
        }
        else
        {
          r--;
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
