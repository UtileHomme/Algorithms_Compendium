// https: //www.interviewbit.com/problems/colorful-number/

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>

using namespace std; 

class Solution 
{
    public: 
    int colorful(int A)
    {
        if(!A)
        {
            return 0;
        }

        vector <int> B;

        long long int val = 1; 

        //to put the all digits of a number into an Array
        while(A)
        {
            B.insert(B.begin(), A%10);
            A = A / 10;
        }

        map<long int, long int> myMap; 

        for(int i=0; i<B.size(); i++)
        {
            val = 1;

            for(int j=i; j<B.size(); j++)
            {
                val = val * B[j];

                if(myMap.find(val)!= myMap.end())
                {
                    return 0;
                }

                myMap.insert({val, val});
            }
        }

        return 1;
    }
};

int main()
{
    Solution s; 

    int k = s.colorful(264);

    cout<<k;

    return 0;
}