// https: //www.interviewbit.com/problems/2-sum/

#include <iostream> 
#include <bits/stdc++.h> 

using namespace std; 

class Solution 
{
    public: 
    vector <int> twoSum(const vector<int> &num, int target)
    {
        int x = -1, y=-1; 

        for(int i=2; i<=num.size();i++)
        {
            for(int j=1; j<i; j++)
            {
                if(num[i-1]+num[j-1]==target)
                {
                    x = j;
                    y = i; 

                    vector <int> ans; 

                    if(x!=-1)
                    {
                        ans.push_back(x);
                        ans.push_back(y);
                    }

                    return ans;
                }
            }           
        }
    }
};

int main()
{
    vector <int> A = {1, 4, 45, 6, 10, -8};

    Solution s;
    
    vector <int> B = s.twoSum(A,-7);

    for(int i=0;i<B.size();i++)
    {
        cout<<B[i]<<" ";
    }

    return 0;
}