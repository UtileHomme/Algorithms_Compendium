// https://www.interviewbit.com/problems/triplets-with-sum-between-given-range/

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:

  int solve(vector <string> &A)
  {
    vector <float> B;

    for(auto c:A)
    {
      float k = stof(c);
      B.push_back(k);
    }

    vector <double> range1;
    vector <double> range2;
    vector <double> range3;

    for(int i=0;i<B.size();i++)
    {
      if(B[i]>double(0.0) && B[i]<(double)2/3)
      {
        range1.push_back(B[i]);
      }
    }

    for(int i=0;i<B.size();i++)
    {
      if(B[i]>(double)2/3 && B[i]<(double)1.0)
      {
        range2.push_back(B[i]);
      }
    }

    for(int i=0;i<B.size();i++)
    {
      if(B[i]>(double)1.0 && B[i]<(double)2.0)
      {
        range3.push_back(B[i]);
      }
    }

    sort(range1.begin(), range1.end());
    sort(range2.begin(), range2.end());
    sort(range3.begin(), range3.end());

    int range1Size = range1.size();
    int range2Size = range2.size();
    int range3Size = range3.size();

    if(range1Size>=3 && range1[range1Size-1] + range1[range1Size-2] + range1[range1Size-3]>=1.0)
    {
      return 1;
    }
    if(range1Size>=2 && range3Size>=1 && range1[0]+range1[1]+range3[0]<=2.0)
    {
      return 1;
    }
    if(range1Size>=1 && range2Size>=2 && range1[0]+range2[0]+range2[1]<=2.0)
    {
      return 1;
    }
    if(range1Size>=1 && range2Size>=1 && range3Size>=1 && range1[0]+range2[0]+range3[0]<=2.0)
    {
      return 1;
    }
    if(range1Size>=2 && range2Size>=1)
    {
      if(range1[range1Size-1] + range1[range2Size-2] + range2[0] < 2.0 && range1[range1Size-1] + range1[range1Size-2] + range2[0] > 1.0)
      {
        return 1;
      }
      if(range1[0] + range1[1] + range2[range2Size-1] > 1.0 && range1[0] + range1[1] + range2[range2Size-1]< 2.0)
      {
        return 1;
      }
    }

    return 0;
  }
};

int main()
{
  Solution s;
  vector <string> A = {"1.453", "1.3424","1.5623","0.67867","0.4976","1.234","2.345"};

  int k = s.solve(A);

  cout<<k;

  return 0;
}
