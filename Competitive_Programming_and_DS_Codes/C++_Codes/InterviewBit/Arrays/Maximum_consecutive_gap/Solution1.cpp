// https://www.interviewbit.com/problems/maximum-consecutive-gap/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int maximumGap(const vector<int> &num)
  {
    if(num.empty() || num.size() < 2)
    return 0;

    int maxNum = *max_element(num.begin(), num.end());
    int minNum = *min_element(num.begin(), num.end());

    //average gap from minNum to maxNum.
    int gap = (maxNum - minNum - 1) / (num.size() - 1) + 1;

    //number of buckets = num.size() - 1
    //first argument is the size of bucket
    //second argument is the default value
    vector<int> bucketsMin(num.size() - 1, INT_MAX);
    vector<int> bucketsMax(num.size() - 1, INT_MIN);

    //put into buckets all numbers except the min and max value
    for (int i = 0; i < num.size(); i++) {
      if (num[i] != maxNum && num[i] != minNum)
      {
        int buckInd = (num[i] - minNum) / gap;
        bucketsMin[buckInd] = min(bucketsMin[buckInd], num[i]);
        bucketsMax[buckInd] = max(bucketsMax[buckInd], num[i]);
      }
    }

    int maxGap = INT_MIN;
    int previous = minNum;

    for (int i = 0; i < num.size() - 1; i++)
    {
      if (bucketsMin[i] == INT_MAX && bucketsMax[i] == INT_MIN)
      {
        continue;   //empty
      }

      maxGap = max(maxGap, bucketsMin[i] - previous);
      previous = bucketsMax[i];
    }

    maxGap = max(maxGap, maxNum - previous);
    
    return maxGap;
  }
};

int main()
{
  vector <int> A = {3,7,1,13,8};

  Solution s;

  int k = s.maximumGap(A);

  cout<<k;

  return 0;
}
