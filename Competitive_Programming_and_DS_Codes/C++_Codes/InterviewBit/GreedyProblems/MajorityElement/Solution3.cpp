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
    map <int, int> m1;

    map <int, int>::iterator i1;

    for(int i=0;i<A.size();i++)
    {
      if(m1.find(A[i])!=m1.end())
      {
        int freq = m1.find(A[i])->second;
        i1 = m1.find(A[i]);
        int cnt = freq + 1;

        if(cnt>A.size()/2)
        {
          return (i1->first);
        }
        else
        {
          i1->second = cnt;
        }
      }
      else
      {
        m1.insert(pair <int, int> (A[i], 1));
      }
    }

    return -1;

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
