// https://www.geeksforgeeks.org/painters-partition-problem-set-2/

https://articles.leetcode.com/the-painters-partition-problem-part-ii/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


class Solution
{
public:

  bool isPossible(long long _Max, int k, vector <int> &A)
  {
    int _max_ele = *max_element(A.begin(), A.end());

    // move to the right
    if(_max_ele>_Max)
    {
      return false;
    }

    long long total = 0;

    int cnt = 1;

    int n = A.size();

    //Find the minimum required painters for given maxLen
    //which is the maximum length a painter can paint
    for(int i=0;i<n; i++)
    {
      total += A[i];

      if(total>_Max)
      {
        total = A[i];
        cnt++;
      }
    }

    //move to the left
    if(cnt<=k)
    {
      return true;
    }
    // move to the right
    else
    {
      return false;
    }
  }

  long long partition(vector <int> &A, int k, int T)
  {
    int size = A.size();

    long long end = 0;
    long long start = 0;

    for(int i=0;i<size;i++)
    {
      end = end + A[i];
    }

    long long ans=INT_MAX;
    ans = ans * INT_MAX;

    while(start<=end)
    {
      long long mid = start + (end - start)/2;

      //if the "mid" returns the "no of painters <= given painter"
      if(isPossible(mid, k, A))
      {
        ans = min(mid, ans);
        end = mid - 1;
      }
      else
      {
        start = mid + 1;
      }
    }

    return (ans * (long long) T ) %10000003;
  }
};


int main()
{
  vector <int> A = { 10, 20, 60, 50, 30, 40 };

  int k = 3;

  int T = 3;

  Solution s;

  cout<<s.partition(A,k,T);
  return 0;
}
