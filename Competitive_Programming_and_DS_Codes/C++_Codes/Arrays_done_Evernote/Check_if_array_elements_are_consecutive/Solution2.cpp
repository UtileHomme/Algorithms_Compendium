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
            //to check whether the elements are distinct
            vector <bool> visited(A.size(), 0);

            for (int i = 0; i < A.size(); i++)
            {
                //if the elements are consecutive, each of them will be visited once

                //A[i] - min, will give the index from 0 to n-1
                if (visited[A[i] - min] != false)
                {
                    return false;
                }

                visited[A[i] - min] = true;
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