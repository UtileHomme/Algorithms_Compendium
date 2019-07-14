// https://www.interviewbit.com/problems/container-with-most-water/

// https://www.geeksforgeeks.org/container-with-most-water/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{

public:

  int maxArea(vector <int> &height)
  {
    int end = height.size()-1;
    int start = 0;

    int maxVol = 0;

    while(start < end)
    {
      maxVol = max(maxVol, (end-start)* min(height[start], height[end]));

      if(height[start]<height[end])
      {
        start++;
      }
      else
      {
        end--;
      }
    }

    return maxVol;

  }
};

int main()
{

  Solution s;

  vector <int> A = {3,1,2,4,5};

  int k = s.maxArea(A);

  cout<<k;

  return 0;
}
