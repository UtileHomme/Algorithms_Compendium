// https://www.interviewbit.com/problems/triplets-with-sum-between-given-range/

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class Solution
{
public:

  double min_element(vector <double> A)
  {
    double min = A[0];

    for(int i=0;i<A.size();i++)
    {
      if(A[i]<min)
      {
        min = A[i];
      }
    }

    return min;
  }
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

    int res = 0;

    // case 1
    if(range1.size()>=3)
    {
      //arranges the numbers in descending order and places them in a queue
      priority_queue <double> q (range1.begin(), range1.end());

      double sum = 0;

      for(int i=0;i<=2;i++)
      {
        sum += q.top();
        q.pop();
      }

      if(sum>1)
      {
        res=1;
        return res;
      }
    }

    //case 2
    if(range1.size()>=2 && range2.size()>=1)
    {
      priority_queue <double> q1(range1.begin(), range1.end());

      double sum1 = 0;

      for(int i=0;i<=1;i++)
      {
        sum1 += q1.top();
        q1.pop();
      }

      for(int i=0;i<range2.size();i++)
      {
        if(1-sum1<range2[i] && range2[i]<2-sum1)
        {
          res=1;
          return res;
        }
      }
    }

    //case 3
    if(range1.size()>=2 && range3.size()>=1)
    {
      //stores the number in ascending order in the queue
      priority_queue <double, vector <double>, greater<double>> q2(range1.begin(), range1.end());

      double sum2=0;

      for(int i=0;i<=1;i++)
      {
        sum2+= q2.top();
        q2.pop();
      }

      double minC = min_element(range3);

      if(sum2 + minC<2.0)
      {
        res = 1;
        return res;
      }
    }

    //case 4
    if(range2.size()>=2 && range1.size()>=1)
    {
      priority_queue <double, vector<double>, greater<double>> q3(range2.begin(), range2.end());

      double sum3 = 0;

      for(int i=0;i<=1;i++)
      {
        sum3 += q3.top();
        q3.pop();
      }

      for(int i=0;i<range1.size();i++)
      {
        if(range1[i]<2-sum3)
        {
          res = 1;
          return res;
        }
      }

      //case 5
      if(range1.size()>=1 && range2.size()>=1 && range3.size()>=1)
      {
        double min1 = min_element(range1);
        double min2 = min_element(range2);
        double min3 = min_element(range3);

        double sum = min1 + min2 + min3;
        if(sum <2 && sum>1)
        {
          res = 1;
          return res;
        }
      }
    }


    return res;
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
