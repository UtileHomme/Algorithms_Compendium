// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/tutorial/


#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string s = "ababcd";
    int len = s.length();

    for(char k='a' ; k<='z';k++)
    {
        int freq=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]==k)
            {
                freq++;
            }
        }

        if(freq==0)
        {
             continue;
        }
        else
        {
            cout<<"Frequency of "<<k<<" is "<<freq<<endl;
        }
    }
}
