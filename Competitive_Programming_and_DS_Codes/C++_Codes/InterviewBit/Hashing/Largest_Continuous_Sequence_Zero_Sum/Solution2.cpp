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

        int i,j;
        int sum=0, maxLen=0, start=0, temp, len;

        map <int, int> hash; 

        for(i=0;i<n;i++)
        {
            //takes the cummulative sum at the particular index
            sum = sum + A[i];

            if(sum==0)
            {
                maxLen = i+1;
                start = 0;
            }

            //the cummulative sum at that index was not found in the hash table
            if(hash.find(sum)==hash.end())
            {
                hash[sum] = i;
            }
            else 
            {
                temp = hash[sum];

                //length of this subarray
                len = i-temp;

                if(maxLen < len)
                {
                    maxLen = len; 
                    start = temp + 1;
                }
            }

        }

        j=0;


        vector <int> ans(maxLen); 

        //add the subarray to the vector
        for(int i=start; i<start+maxLen; i++)
        {
            ans[j++] = A[i];
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