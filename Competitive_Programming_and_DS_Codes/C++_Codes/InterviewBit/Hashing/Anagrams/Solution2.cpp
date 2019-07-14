// https: //www.interviewbit.com/problems/anagrams/

// https : //www.geeksforgeeks.org/given-a-sequence-of-words-print-all-anagrams-together-using-stl/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printAnagram(map < string, vector <string> > &store)
{
    map<string, vector<string> >::iterator it;

    for (it = store.begin(); it!= store.end(); it++)
    {
        vector<string> tempVector = it->second;

        int size = tempVector.size();

        if (size > 1)
        {
            for (int i = 0; i < size; i++)
            {
                cout << tempVector[i] << " ";
            }

            cout << endl;
        }
    }
}

class Solution
{
  public:
    vector<vector <string> > anagrams(vector<string> &A)
    {
        map<string, vector < string> > store;

        for (int i = 0; i < A.size(); i++)
        {
            //take each string
            string tempString = A[i];

            //sort that string
            sort(tempString.begin(), tempString.end());

            //check if the sorted string is found in the hashMap
            if(store.find(tempString)==store.end())
            {
                //if not found, add the sorted string as "hash" and a vector of original strings as the "key"
                vector<string> tempVector;
                tempVector.push_back(A[i]);
                store.insert(make_pair(tempString, tempVector));

            }
            else 
            {
                //access the index which has the sorted string
                vector<string> tempVector(store[tempString]);

                tempVector.push_back(A[i]);
                store[tempString] = tempVector;
            }
        }

        printAnagram(store);
    }
};

int main()
{
    Solution s;

    vector <string> A = {"cat", "dog", "god", "tac"};

    s.anagrams(A);
}