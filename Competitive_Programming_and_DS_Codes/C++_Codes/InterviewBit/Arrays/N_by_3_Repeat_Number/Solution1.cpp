// https://www.interviewbit.com/problems/n3-repeat-number/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int repeatedNumber(const vector <int> &A)
  {
    int n = A.size();

    int cnt1=0, cnt2=0;

    int first = INT_MAX, second = INT_MAX;

    for(int i=0;i<n;i++)
    {
      // if this element is previously seen,
      // increment count1.
      if(first==A[i])
      {
        cnt1++;
      }
      // if this element is previously seen,
     // increment count2.
      else if(second==A[i])
      {
        cnt2++;
      }

      else if(cnt1==0)
      {
        cnt1++;
        first = A[i];
      }
      else if(cnt2==0)
      {
        cnt2++;
        second = A[i];
      }

      // if current element is different from
      // both the previously seen variables,
      // decrement both the counts.
      else
      {
        cnt1--;
        cnt2--;
      }
    }

    cnt1=0;
    cnt2=0;

    // Again traverse the array and find the
    // actual counts.
    for(int i=0;i<n;i++)
    {
      if(A[i]==first)
      {
        cnt1++;
      }
      else if(A[i]==second)
      {
        cnt2++;
      }
    }

    if(cnt1>n/3)
    {
      return first;
    }

    if(cnt2>n/3)
    {
      return second;
    }

      return -1;
  }
};

int main()
{
  Solution s;

  vector <int> A = {3, 2, 1, 3, 2, 1, 3, 2};
  int k = s.repeatedNumber(A);

  cout<<k;

  return 0;
}
