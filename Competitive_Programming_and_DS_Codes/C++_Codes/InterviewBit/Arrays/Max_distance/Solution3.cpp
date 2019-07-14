// https://www.interviewbit.com/problems/max-distance/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int maxGap(const vector <int> &A)
  {
    if(A.size()==0)
    {
      return -1;
    }
    if(A.size()==1)
    {
      return 0;
    }

    vector <int> l;
    int i;

    int mini = A[0];

    l.push_back(A[0]);

    for(int i=1;i<A.size();i++)
    {
      l.push_back(min(A[i], l[i-1]));
    }

    mini = A[A.size()-1];

    vector <int> r(A.size());

    r[A.size()-1] = A[A.size()-1];

    for(i=A.size()-2; i>=0; i--)
    {
      r[i] = max(r[i+1], A[i]);
    }

    int diff=0;
    int j = 0;

    i = 0;

    while(i<A.size() && j<A.size())
    {
      if(l[i]<=r[j])
      {
        diff = max(diff, j - i);
        j++;
      }

      //this happens when an element of the "L" array is
      //larger than the element of the "R" array
      //such elements are following the pattern A[i]>A[j] whiere i<j
      else
      {
        i++;
      }
    }

    return diff;
  }
};

int main()
{
  Solution s;

  vector <int> num = {3,4,5,2};

  int k = s.maxGap(num);

  cout<<k<<endl;
  return 0;
}
