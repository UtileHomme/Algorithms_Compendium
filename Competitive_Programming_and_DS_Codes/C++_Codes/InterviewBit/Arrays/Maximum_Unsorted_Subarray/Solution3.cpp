// https://www.interviewbit.com/problems/maximum-unsorted-subarray/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  vector <int> subUnsort(vector <int> &A)
  {
    int i = 1;
    for (i = 1; i < A.size() && A[i] >= A[i - 1]; ++i)
    {
    }

    if (i == A.size())
    {
    return vector<int> ({-1});
    }

    // Find the point j starting from end where the array breaks ascending order rule
    int j = A.size() - 2;

    for (; j >= 0 && A[j] <= A[j + 1]; --j)
    {

    }

    if (j < i)
    {
      swap(i, j);
    }


    // Find max element in array from start to the point j
    int max_val = *max_element(A.begin(), A.begin() + j + 1 );

    // Find min element in array from i to end
    int min_val = *min_element(A.begin() + i, A.end());

    // Reduce the value of i untill A[i] is greater than min value
    while (i - 1 >= 0 && A[i - 1] > min_val)
    {
      --i;
    }

    // Increase the value of j untill A[j] is less than max value
    while (j + 1 < A.size() && A[j + 1] < max_val)
    {
      ++j;
    }

    return vector<int> ({i, j});


  }
};

int main()
{
  vector <int> A = {10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60};

  Solution s;

  vector <int> B = s.subUnsort(A);

  for(int i=0;i<B.size();i++)
  {
    cout<<B[i]<<" ";
  }
  return 0;
}
