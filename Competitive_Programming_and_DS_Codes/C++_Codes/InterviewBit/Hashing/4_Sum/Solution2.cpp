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

        set <vector <int> > ans; 

        int size = A.size(); 

        for(int i=0; i<size-3; i++)
        {
           for(int j=i+1; j<size-2; j++)
           {
               int k = j+1, l = size-1; 

               int sum = B - A[i] - A[j];

               while(k<l)
               {
                   if(A[k] + A[l] == sum)
                   {
                       vector <int> temp = {A[i], A[j], A[k], A[l]};

                       ans.insert(temp);

                       k++;
                       l--;
                   }
                   else if(A[k] + A[l] < sum)
                   {
                       k++;
                   }
                   else 
                   {
                       l--;
                   }
               }
           }
        }

        vector <vector <int> > ans2; 

        for(auto it = ans.begin(); it!=ans.end(); it++)
        {
            vector <int> temp = *it; 
            ans2.push_back(temp);
        }

        sort(ans2.begin(), ans2.end());

        return ans2;
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