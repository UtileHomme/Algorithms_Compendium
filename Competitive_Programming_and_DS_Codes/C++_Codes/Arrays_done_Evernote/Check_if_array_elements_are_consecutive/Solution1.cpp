// https: //www.geeksforgeeks.org/check-if-array-elements-are-consecutive/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
  public:
    int checkConsecutiveElements(vector<int> A)
    {
        sort(A.begin(), A.end());

        int n = A.size();

        int diff = 0;

        for (int i = 0; i < n - 1; i++)
        {
            int first = A[i];
            int second = A[i + 1];

            diff = second - first;

            if (diff != 1)
            {
                return 0;
            }
        }

        return 1;
    }
};

int main()
{
    vector<int> A = {83, 70, 80, 81, 79, 82};

    Solution s;

    int k = s.checkConsecutiveElements(A);

    cout << k;

    return 0;
}