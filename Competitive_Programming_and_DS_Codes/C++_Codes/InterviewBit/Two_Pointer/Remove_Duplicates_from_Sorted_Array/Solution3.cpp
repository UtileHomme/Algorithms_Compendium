// https://www.geeksforgeeks.org/?p=147416

// https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int removeDuplicates(vector <int> &A)
  {
    //used for storing unique elements
    set <int> st;
    set <int>::iterator it;

    for(int i=0;i<A.size();i++)
    {
      st.insert(A[i]);
    }

    int i=0;
    for(it=st.begin(); it!=st.end(); ++it)
    {
      A[i] = *it;
      i++;
    }

    A.erase(A.begin()+i, A.end());

    return st.size();
  }
};

int main()
{
  Solution s;

  vector <int> A = {1,2,2,3,3,4,4,5,5};

  int n = A.size();

  n = s.removeDuplicates(A);

  for(int i=0;i<n;i++)
  {
    cout<<A[i]<<" ";
  }

  return 0;
}
