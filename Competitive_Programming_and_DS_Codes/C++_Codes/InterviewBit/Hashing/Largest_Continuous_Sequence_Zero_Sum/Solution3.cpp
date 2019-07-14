// https: //www.interviewbit.com/problems/largest-continuous-sequence-zero-sum/

// https : //www.geeksforgeeks.org/find-the-largest-subarray-with-0-sum/

#include <iostream>
#include <bits/stdc++.h>

        using namespace std; 

class Solution  
{
    public:

    vector <int> largestContinuousSequenceZero(vector <int> A)
    {
        int n = A.size(); 

        int maxLen = 0, start=0, end=0;

        for(int i=0;i<n;i++)
        {
            int curr_sum = 0; 

            for(int j=i; j<n; j++)
            {
                curr_sum += A[j];

                if(curr_sum==0)
                {
                    if(maxLen < (j-i+1))
                    {
                        maxLen = j-i+1;
                        start = i;
                        end = j;
                    }

                }
            }
        }

        vector <int> ans; 

        //add the subarray to the vector
        for(int i=start; i<=end; i++)
        {
            ans.push_back(A[i]);
        }

        return ans;
    }
};

int main()
{
    vector <int> A = {10,2,-8,-4,5,5,2};

    Solution s;

    vector<int> B = s.largestContinuousSequenceZero(A);

    for(int i=0; i<B.size();i++)
    {
        cout<<B[i]<<" ";
    }

    return 0;
}