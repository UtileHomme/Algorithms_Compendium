// https: //www.interviewbit.com/problems/diffk-ii/

#include <iostream>
#include <bits/stdc++.h>

using namespace std; 

class Solution  
{
    public:
    int diffPossible(const vector <int> &A, int B)
    {
        if(A.size()<2 || B<0)
        {
            return 0;
        }

        unordered_map<int,int> myMap;

        for(int i=0;i<A.size();i++)
        {
          if(myMap.find(A[i])==myMap.end())
          {
              myMap[A[i]+B] = i;
              myMap[A[i]-B] = i; 
          }
          else 
          {
              return 1;
          }
        }

        return 0;
    }
};

int main()
{
    Solution s;
     
    vector <int> A = {1,5,3};

    int B = 2;

    int k = s.diffPossible(A,B);

    cout<<k;

    return 0;   
}