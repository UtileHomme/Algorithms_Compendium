// https: //www.interviewbit.com/problems/largest-continuous-sequence-zero-sum/

#include <iostream>
#include <bits/stdc++.h>

using namespace std; 

class Solution  
{
    public:

    vector <int> largestContinuousSequenceZero(vector <int> A)
    {
        int n = A.size(); 

        vector <int> cummulativeSum; 
        if(n==0)
        {
            return cummulativeSum;
        }

        cummulativeSum.push_back(A[0]);

        for(int i=1; i<n;i++)
        {
            cummulativeSum.push_back(A[i] + cummulativeSum[i-1]);
        }

        int start = 0;
        int end = 0; 

        map <int, int> hash; 

        for(int i=0;i<n;i++)
        {
            //if sum[k] = 0 condition matches, we have a subarray of zero sum from the beginning index
            if(cummulativeSum[i]==0)
            {
                int temp_start = 0;
                int temp_end = i+1;

                if(temp_end-temp_start >= end-start)
                {
                    start = temp_end;
                    end = temp_end;
                }
            }
            else 
            {
                //here the sum[i] = sum[j] condition is true
                if(hash.find(cummulativeSum[i])!=hash.end())
                {
                    int temp_start = hash[cummulativeSum[i]]+1; 
                    
                    int temp_end = i+1;

                    if(temp_end-temp_start > end - start)
                    {
                        start = temp_start;
                        end = temp_end;
                    }
                    else if(temp_end-temp_start == end - start && temp_start <start) 
                    {
                        start = temp_start; 
                        end = temp_end;
                    }
                }

                else 
                {
                    hash[cummulativeSum[i]] = i;
                }
            }
        }

        vector <int> ans; 

        for(int i=start; i<end; i++)
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