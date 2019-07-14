// https: //www.interviewbit.com/problems/4-sum/

// https: //www.geeksforgeeks.org/find-four-elements-that-sum-to-a-given-value-set-2/

// https: //www.geeksforgeeks.org/find-four-numbers-with-sum-equal-to-given-sum/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
  public:
    vector<vector<int> > fourSum(vector<int> A, int B)
    {

        sort(A.begin(), A.end());
        
        map < int, pair <int, int> > hashMap; 

        int n = A.size();
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                hashMap[A[i] + A[j]] = {i,j};
            }
        }

        set <vector <int> > ans;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int sum = A[i] + A[j];

                if(hashMap.find(B - sum)!=hashMap.end())
                {
                    pair <int, int> p = hashMap[B-sum];

                    if(p.first!=i && p.first!=j && p.second!=i && p.second!=j)
                    {
                        vector <int> temp; 
                        temp.push_back(A[i]);
                        temp.push_back(A[j]);
                        temp.push_back(A[p.first]);
                        temp.push_back(A[p.second]);

                        ans.insert(temp);

                    }
                }
            }
        }

        vector<vector <int> > ans2;

        for (auto it = ans.begin(); it != ans.end(); it++)
        {
            vector<int> temp = *it;
            ans2.push_back(temp);
        }

        sort(ans2.begin(), ans2.end());

        return ans2;
    }
};

int main()
{
    vector <int> A = {-1, -1, 0, 0, -1, 0, 0, -1, 1, 1, 1, 1};

    Solution s;

    vector<vector <int> > B = s.fourSum(A, 0);

    for (int i = 0; i < B.size(); i++)
    {
        for (int j=0; j<B[i].size(); j++)
        {
            cout << B[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}