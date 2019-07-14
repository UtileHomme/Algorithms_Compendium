// https: //www.interviewbit.com/problems/2-sum/

#include <iostream> 
#include <bits/stdc++.h> 

using namespace std; 

class Solution 
{
    public: 
    vector <int> twoSum(const vector<int> &num, int target)
    {
        map <int, int> hashMap; 

        vector <int> ans; 

        for(int i=0;i<num.size(); i++)
        {
            int required = target - num[i];


            if(hashMap.find(required)!=hashMap.end())
            {
                //extract the location of the hashed number which is equal to required
                ans.push_back(hashMap[required]);

                //add the location of the number currently being traversed
                ans.push_back(i+1);
                return ans;
            }

            if(hashMap.find(num[i])==hashMap.end())
            {
                hashMap[num[i]] = i+1;
            }
        }

        return ans;
    }
};

int main()
{
    vector <int> A = {1, 4, 45, 6, 10, -8};

    int k = 49;

    Solution s;
    
    vector <int> B = s.twoSum(A,16);

    for(int i=0;i<B.size();i++)
    {
        cout<<B[i]<<" ";
    }

    return 0;
}