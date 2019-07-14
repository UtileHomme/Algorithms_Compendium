// https: //www.geeksforgeeks.org/find-the-first-second-and-third-minimum-elements-in-an-array/

#include <iostream> 
#include <bits/stdc++.h> 

using namespace std; 

class Solution 
{
    public: 
    vector <int> minThree(vector <int> A)
    {
        int firstMin = INT_MAX, secondMin = INT_MAX, thirdMin = INT_MAX; 

        for(int i=0; i<A.size();i++)
        {
            /* Check if current element is less than 
           firstmin, then update first, second and 
           third */
            if(A[i]<firstMin)
            {
                thirdMin = secondMin; 
                secondMin = firstMin; 
                firstMin = A[i];
            }

            else if(A[i]<secondMin)
            {
                thirdMin = secondMin; 
                secondMin = A[i];
            }

            else if(A[i]<thirdMin)
            {
                thirdMin = A[i];
            }
        }

        vector <int> B;

        B.push_back(firstMin);
        B.push_back(secondMin);
        B.push_back(thirdMin);

        return B;
    }
};

int main()
{
    vector <int> A = {0, -1, 3, 100, -70, 50};

    Solution s;
    vector <int> B = s.minThree(A);

    for(int i=0;i<B.size();i++)
    {
        cout<<B[i]<<" ";
    }

    return 0;
}