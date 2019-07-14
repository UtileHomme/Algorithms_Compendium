// https: //www.geeksforgeeks.org/check-if-array-elements-are-consecutive/

// Handles both positive and negative case

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
  public:


    int checkConsecutiveElements(vector<int> A)
    {
        if (A.size() < 1)
        {
            return 0;
        }

        int min = *(min_element(A.begin(), A.end()));

        int n = A.size();

        int AP_sum = (n * (2 * min + (n-1)*1))/2; 

        int sum = 0; 

        for(int i=0; i<A.size();i++)
        {
            sum = sum + A[i];
        }

        return AP_sum == sum;
    }
};

int main()
{
    vector<int> A = {83, 78, 87, 81, 79, 82};

    Solution s;

    int k = s.checkConsecutiveElements(A);

    cout << k;

    return 0;
}