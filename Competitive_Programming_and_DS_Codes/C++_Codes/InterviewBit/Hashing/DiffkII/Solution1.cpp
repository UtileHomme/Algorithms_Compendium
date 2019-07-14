// https: //www.interviewbit.com/problems/diffk-ii/

#include <iostream>
#include <bits/stdc++.h>

using namespace std; 

class Solution  
{
    public:
    int diffPossible(const vector <int> &A, int B)
    {
        unordered_map<int, int> myMap; 

        for(int i=0;i<A.size();i++)
        {
            if(myMap.find(A[i])==myMap.end())
            {
                myMap[A[i]]=1;
            }
            else 
            {
                myMap[A[i]]=2;
            }
        }

        auto it = myMap.begin();

        //till we reach the end of the map
        while(it!=myMap.end())
        {
            //find the difference between the current number and the expected difference
            int num = (it->first) - B;

            //if this difference exists in the map
            if(myMap.find(num)!=myMap.end())
            {
                if(myMap.find(num)!=it)
                {
                    return 1;
                }
                else 
                {
                    if(it->second>1)
                    {
                        return 1;
                    }
                }
            }

            it++;
        }

        return 0;
    }
};

int main()
{
    Solution s;
     
    vector <int> A = {2,3,3,3};

    int B = 2;

    int k = s.diffPossible(A,B);

    cout<<k;

    return 0;   
}