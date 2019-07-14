// https://www.interviewbit.com/problems/triplets-with-sum-between-given-range/

#include <iostream>
#include <queue>
#include <vector>

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

    int size = B.size();

    for(int i=0;i<size-2;i++)
    {
      for(int j=i+1;j<size-1;j++)
      {
        for(int k=j+1;k<size;k++)
        {
          float l = B[i] + B[j] + B[k];
          if(l>1 && l<2)
          {
            return 1;
          }
        }
      }
    }

    return 0;
  }
};

int main()
{
  Solution s;
  vector <string> A = {"1.453", "1.3424","0.5623","0.67867","0.4976","1.234","2.345"};

  int k = s.solve(A);

  cout<<k;

  return 0;
}
