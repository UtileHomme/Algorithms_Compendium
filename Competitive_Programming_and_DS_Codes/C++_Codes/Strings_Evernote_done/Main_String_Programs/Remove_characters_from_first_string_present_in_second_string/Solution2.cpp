// https://www.geeksforgeeks.org/?p=353

#include <iostream>  
#include <bits/stdc++.h>

using namespace std; 

vector <int> getCharCount(char *s2)
{
    vector <int> count(256,0);

    for(int i=0; *(s2+i); i++)
    {
        count[*(s2+i)]++;
    }

    return count;
}

char *removeDirtyChars(char *s1, char *s2)
{
    vector <int> k = getCharCount(s2);

    int ip_ind =0, res_ind = 0;

    while(*(s1 + ip_ind))
    {
        char temp = *(s1 + ip_ind);

        if(k[temp]==0)
        {
            *(s1 + res_ind) = *(s1 + ip_ind);
            res_ind++;
        } 

        ip_ind++;
    }

    *(s1+res_ind) = '\0';

    return s1;
}

int main()
{
    char string1[] = "geeksforgeeks";
    char string2[] = "mgask";

    cout<<removeDirtyChars(string1, string2);
    return 0;
}