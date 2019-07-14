// https://www.interviewbit.com/problems/count-element-occurence/

// https://www.geeksforgeeks.org/count-number-of-occurrences-or-frequency-in-a-sorted-array/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  int findCount(vector <int> &A, int B)
  {
    vector <int>::iterator low;
    vector <int>::iterator high;

    low = lower_bound(A.begin(), A.end(), B);

    if(low == A.end() || *low!=B)
    {
      return 0;
    }

    high = upper_bound(low, A.end(), B);

    cout<<" "<<*low<<" "<<*high<<endl;

    return high-low;

  }
};


int main()
{
  vector <int> A = {1,2,5,5,5,5,6,7,8,9,9};

  int k = 5;

  Solution s;

  int occurrenceCount = s.findCount(A, k);
  cout<<occurrenceCount;

  return 0;
}

// Time Complexity = O(logn)
