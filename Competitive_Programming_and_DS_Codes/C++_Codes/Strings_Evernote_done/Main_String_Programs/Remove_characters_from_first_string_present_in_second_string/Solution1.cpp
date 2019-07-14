// https://www.geeksforgeeks.org/?p=353

#include <iostream>  
#include <bits/stdc++.h>

using namespace std; 

vector <bool> getCharCounts(string s2)
{
    vector <bool> hash1(256, 0);

    for(int i=0; i<s2.length(); i++)
    {
        hash1[int(s2[i])] = 1;    
    }

    return hash1;
}

string removeDirtyChars(string s1, string s2)
{
    vector <bool> hash = getCharCounts(s2);

    string s3;

    for(int i=0; i<s1.length(); i++)
    {
        if(hash[int(s1[i])]==false)
        {
            s3.insert(s3.end(), s1[i]);
        }
    }

    return s3;
}

int main()
{
    string string1 = "geeksforgeeks";
    string string2 = "mgask";

    cout<<removeDirtyChars(string1, string2);
    return 0;
}