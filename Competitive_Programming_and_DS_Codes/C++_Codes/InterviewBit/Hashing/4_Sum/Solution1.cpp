// https: //www.interviewbit.com/problems/4-sum/

// https: //www.geeksforgeeks.org/find-four-elements-that-sum-to-a-given-value-set-2/

// https: //www.geeksforgeeks.org/find-four-numbers-with-sum-equal-to-given-sum/

#include <iostream> 
#include <bits/stdc++.h> 

using namespace std; 

class Solution 
{
    public: 
    vector <vector <int> > fourSum(vector<int> A, int B)
    {
        sort(A.begin(), A.end());

        int sum = 0;

        vector <vector <int> > ans; 

        int size = A.size(); 

        for(int i=0; i<size-3; i++)
        {
            // Lets make sure that we do not have duplicate triplets.
            // We skip the duplicate elements as min integer in the triplet.

            if(i>0 && A[i]==A[i-1])
            {
                continue;
            }

            for(int j=i+1; j<size-2; j++)
            {
                if(j>i+1 && A[j]==A[j-1])
                {
                    continue;
                }

                int ptr1 = j+1, ptr2 = size-1;

                while(ptr1<ptr2)
                {
                    sum = A[i] + A[j] + A[ptr1] + A[ptr2];

                    if(sum==B)
                    {
                        vector <int> temp; 
                        temp.push_back(A[i]);
                        temp.push_back(A[j]);
                        temp.push_back(A[ptr1]);
                        temp.push_back(A[ptr2]);
                        ans.push_back(temp);
                    }

                    if(sum>B)
                    {
                        ptr2--;
                    }
                    else if(sum<B)
                    {
                        ptr1++;
                    }

                    else if(sum==B)
                    {
                        ptr1++;
                        while(ptr1<ptr2 && A[ptr1]==A[ptr1-1])
                        {
                            ptr1++;
                        }
                    }
                }
            }
        }

        return ans;
    }
};

int main()
{
    vector <int> A = {-1, -1, 0, 0, -1, 0, 0, -1, 1, 1,1,1};

    Solution s; 

    vector <vector <int> > B = s.fourSum(A, 0);

    for(int i=0; i<B.size(); i++)
    {
        for(int j=0; j<B[i].size(); j++)
        {
            cout<<B[i][j]<<" ";
        }

        cout<<endl;
    }

    return 0;
}