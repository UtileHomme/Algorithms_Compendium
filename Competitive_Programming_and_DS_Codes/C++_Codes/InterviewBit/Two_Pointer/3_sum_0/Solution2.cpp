// https://www.interviewbit.com/problems/3-sum-zero/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  vector <vector<int>> threeSumZero(vector <int> &A)
  {
    vector <vector <int>> B;

    if(A.size()<2)
    {
      return B;
    }

    sort(A.begin(), A.end());

    int sum = 0;

    int size = A.size();

    for(int i=0;i<size-2;i++)
    {
      //start from "i=1" and check the previous element
      //if they are same, skip to the next iteration
      if(i>0 && A[i]==A[i-1])
      {
        continue;
      }

      int l=i+1,k=size-1;

      while(l<k)
      {
        sum = A[i] + A[l] + A[k];

        if(sum==0)
        {
          vector <int> temp;

          temp.push_back(A[i]);
          temp.push_back(A[l]);
          temp.push_back(A[k]);
          B.push_back(temp);
        }

        if(sum>0)
        {
          k--;
        }
        else if(sum<0)
        {
          l++;
        }
        else if(sum==0)
        {
          l++;

          //if the next element is same as the previous, skip to the next element
          //move to its next element
          while(l<k && A[l]==A[l-1])
          {
            l++;
          }
        }
      }
    }
    return B;
  }
};

int main()
{
  vector <int> A = {-2, 0, 1, 1, 2};

  Solution s;

  vector <vector <int> > B = s.threeSumZero(A);

  for(int i=0;i<B.size();i++)
  {
    for(int j=0;j<B[i].size();j++)
    {
      cout<<B[i][j]<<" ";
    }

    cout<<endl;
  }
  return 0;
}
