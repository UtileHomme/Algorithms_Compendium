// https: //www.geeksforgeeks.org/check-if-array-elements-are-consecutive/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
  public:
    int getMin(vector<int> A)
    {
        int min = A[0];

        for (int i = 1; i < A.size(); i++)
        {
            if (A[i] < min)
            {
                min = A[i];
            }
        }

        return min;
    }

    int getMax(vector<int> A)
    {
        int max = A[0];

        for (int i = 1; i < A.size(); i++)
        {
            if (A[i] > max)
            {
                max = A[i];
            }
        }

        return max;
    }

    int checkConsecutiveElements(vector<int> A)
    {
        if (A.size() < 1)
        {
            return 0;
        }

        int min = getMin(A);
        int max = getMax(A);

        if ((max - min + 1) == A.size())
        {

            for (int i = 0; i < A.size(); i++)
            {
              int j; 

              if(A[i]<0)
              {
                  j = - A[i] - min;
              }
              else 
              {
                  j = A[i] - min;
              }

              //make the index element negative if not already  
              if(A[j]>0)
              {
                  A[j] = -A[j];
              }

              //if it is already negative that means the element is repeated
              else 
              {
                  return false;
              }
              

            }

            return true;
        }

        return false;
    }
};

int main()
{
    vector<int> A = {83, 78, 80, 81, 79, 82};

    Solution s;

    int k = s.checkConsecutiveElements(A);

    cout << k;

    return 0;
}