// https://www.interviewbit.com/problems/majority-element/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int majorityElement(const vector <int> &A)
  {
    int maj_index = 0, cnt = 1;

    //find the element which has chances of being the "candidate" for majority element

    for(int i=1; i<A.size();i++)
    {
      if(A[maj_index]==A[i])
      {
        cnt++;
      }
      else
      {
        cnt--;
      }

      if(cnt==0)
      {
        maj_index=i;
        cnt=1;
      }
    }

    //save the candidate in another variable
    int k = A[maj_index];

    int cnt1=0;

    //check whether the candidate key is really the majority element

    for(int i=0;i<A.size();i++)
    {
      if(A[i]==k)
      {
        cnt1++;
      }
    }

    if(cnt1>A.size()/2)
    {
      return k;
    }

  }
};

int main()
{

  vector <int> A = {1,2,3,4,4,6,4,4,4};

  Solution s;

  int k = s.majorityElement(A);

  cout<<k;

  return 0;
}
