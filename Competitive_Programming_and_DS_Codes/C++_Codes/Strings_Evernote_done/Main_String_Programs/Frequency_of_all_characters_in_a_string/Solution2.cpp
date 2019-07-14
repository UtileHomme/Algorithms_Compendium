// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/tutorial/


#include <iostream>
#include <string.h>

using namespace std;

int stringHash(char c)
{
    return (c-'a');
}

int main()
{
    string s = "ababcd";
    int len = s.length();

    int Freq[26];

    for(int i=0;i<26;i++)
    {
        Freq[i]=0;
    }

    for(int i=0;i<len;i++)
    {
        int index = stringHash(s[i]);
       Freq[index]++;
    }


    for(int i=0;i<26;i++)
    {
        if(Freq[i]>0)
        {
            cout<<"Frequency of "<<char(i+'a')<<" is "<<Freq[i]<<endl;
        }
        else
        {
            continue;
        }
    }

    return 0;
}
