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
    float a, b, c;
    a = stof(A[0]);
    b = stof(A[1]);
    c = stof(A[2]);

    for(int i=3;i<A.size();i++)
    {
      if(a+b+c>1.0 && a+b+c<2.0)
      {
        return 1;
      }
      else
      {
        if(a+b+c>=2.0)
        {
          //since a is more than b and c we are trying for a lower value of a so that
          //the sum comes in the given range
          if(a>=b && a>=c)
          {
            a = stof(A[i]);
          }
          else if(b>=c)
          {
            b = stof(A[i]);
          }
          else
          {
            c = stof(A[i]);
          }
        }

        //(a+b+c<1.0)
        else
        {
          //since a is less than b and c we are trying for a higher value of a so that
          //the sum comes in the given range
          if(a<c && a<b)
          {
            a = stof(A[i]);
          }
          else if(b<c)
          {
            b = stof(A[i]);
          }
          else
          {
            c = stof(A[i]);
          }
        }
      }
    }

    if(a+b+c>1.0 && a+b+c<2.0)
    {
      return 1;
    }
    
    return 0;
  }
};

int main()
{
  Solution s;
  vector <string> A = {"0.378", "0.421","0.200","1.324","1.212","1.532"};

  int k = s.solve(A);

  cout<<k;

  return 0;
}
