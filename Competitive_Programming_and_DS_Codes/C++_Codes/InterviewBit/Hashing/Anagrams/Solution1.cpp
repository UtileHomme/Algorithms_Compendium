// https: //www.interviewbit.com/problems/anagrams/

// https : //www.geeksforgeeks.org/given-a-sequence-of-words-print-all-anagrams-together-using-stl/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
  public:
    string mySort(string temp)
    {
        vector<int> str;

        for (int i = 0; i < temp.size(); i++)
        {
            str.push_back((int)temp[i]);
        }

        sort(str.begin(), str.end());

        string ans = "";

        for (int i = 0; i < str.size(); i++)
        {
            ans = ans + (char)str[i];
        }

        return ans;
    }

    vector<vector<int>> anagrams(vector<string> &A)
    {

        vector<vector<int>> sol;

        map<string, vector<int>> hashMap;

        for (int i = 0; i < A.size(); i++)
        {
            //sort each word first
            string temp = mySort(A[i]);

            //push the sorted word and its original's index into a hashmap
            //this way for the same word we'll have a vector of indices
            hashMap[temp].push_back(i + 1);
        }

        auto it = hashMap.begin();

        //for each word, push it's vector of indices into a 2D vector
        while (it != hashMap.end())
        {
            sol.push_back(it->second);
            it++;
        }
        return sol;
    }
};

int main()
{
    Solution s;

    vector <string> A = {"cat", "dog", "god", "tac"};

    vector <vector <int> > B = s.anagrams(A);

    for (int i = 0; i < B.size(); i++)
    {
        for (int j = 0; j < B[i].size(); j++)
        {
            cout << B[i][j] << " ";
        }

        cout << endl;
    }
}