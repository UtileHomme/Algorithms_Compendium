// https://www.interviewbit.com/problems/3-sum-zero/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  vector <vector<int> > threeSumZero(vector <int> &A)
  {
    vector <vector <int> > B;

    if(A.size()<2)
    {
      return B;
    }

    sort(A.begin(), A.end());

    int i = 0;

    while(i<A.size()-2)
    {
      int j = i+1;
      int k = A.size()-1;

      while(j<k)
      {
        int sum = A[i]+A[j]+A[k];

        if(sum==0)
        {
          vector <int> temp;
          temp.push_back(A[i]);
          temp.push_back(A[j]);
          temp.push_back(A[k]);
          B.push_back(temp);

          temp.erase(temp.begin(), temp.end());

          //check if the next element is equal to the previous
          //this will give duplicate results so avoid it
          while(A[j]==A[j+1])
          {
            j++;

            if(j==A.size())
            {
              break;
            }
          }

          j++;
        }

        //if the sum is more than zero, move to the left
        //also check for duplicate elements from the right hand side
        else if(sum>0)
        {
          while(A[k]==A[k-1])
          {
            k--;
            if(k==0)
            {
              break;
            }
          }

          k--;
        }

        //if the sum is less than zero, move to the right
        // also check for duplicate elements from the left hand side
        else
        {
          while(A[j]==A[j+1])
          {
            j++;
            if(j==A.size())
            {
              break;
            }
          }

          j++;
        }
      }

      while(A[i]==A[i+1])
      {
        i++;

        //we have reached the ending point of the first iteration
        if(i==A.size()-1)
        {
          return B;
        }
      }

      i++;
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
