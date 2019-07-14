// https://www.geeksforgeeks.org/find-median-row-wise-sorted-matrix/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int binaryMedian(vector <vector <int>> &m)
{
  int r = m.size();
  int c = m[0].size();
  int min = INT_MAX, max = INT_MIN;
  for (int i=0; i<r; i++)
  {
    // Finding the minimum element
    if (m[i][0] < min)
    min = m[i][0];

    // Finding the maximum element
    if (m[i][c-1] > max)
    max = m[i][c-1];
  }

  int desired = (r * c + 1) / 2;
  while (min < max)
  {
    int mid = min + (max - min) / 2;
    int place = 0;

    // Find count of elements smaller than or equal to mid
    for (int i = 0; i < r; ++i)
    {
      place = place +  (upper_bound(m[i].begin(), m[i].end(), mid) - m[i].begin());
    }

    if (place < desired)
    {
      min = mid + 1;
    }
    else
    {
      max = mid;
    }
  }
  return min;
}

int main()
{
  vector <vector <int>> m = {{1,2,7,10,11}, {3,5,8,9,14}, {4,9,13,15,17}};

  cout<<binaryMedian(m);
  return 0;
}
