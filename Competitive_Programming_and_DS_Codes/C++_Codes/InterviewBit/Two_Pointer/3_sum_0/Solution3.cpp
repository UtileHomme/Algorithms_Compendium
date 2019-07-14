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

    vector <int> temp;

    if(A.size()<2)
    {
      return B;
    }

    sort(A.begin(), A.end());

    int size = A.size();

    //Look at the sorted array [-4, -1, -1, 1, 2, 3]
    //we can be sure that once we reach "1" there can be no triplets with sum as "0"
    //hence the condition "A[i]<=0"
    for(int i=0;i<size && A[i]<=0;)
    {
      int sum = -A[i];

      for(int j=i+1,k=size-1; j<k;)
      {
        //A[j]+A[k]=-A[i]
        if(A[j]+A[k]==sum)
        {
          temp.push_back(A[i]);
          temp.push_back(A[j]);
          temp.push_back(A[k]);
          B.push_back(temp);

          j++;
          temp.clear();
          while(j<k && A[j]==A[j-1])
          {
            j++;
          }
        }
        else if(A[j]+A[k]<sum)
        {
          j++;
        }
        else
        {
          k--;
        }
      }

      i++;
      while(i<size && A[i]==A[i-1])
      {
        i++;
      }
    }
    
    return B;
  }
};

int main()
{
  vector <int> A = {-2, 0, 1, 1, 2};

  Solution s;

  vector <vector <int>> B = s.threeSumZero(A);

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
