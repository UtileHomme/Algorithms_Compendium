// http://www.geeksforgeeks.org/reverse-an-array-without-affecting-special-characters/


#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

int main()
{
    //initialize the string
    string str = "Ab,c,de!$";

    cout<<"Input String is "<<str<<endl;

    int len = str.length();

    //create a temporary char array for storing only the alphabets
    char temp[10];

    int i,k;
    int cnt=0;

    //if the characters in first array are alphabets, save them into the "temporary" array
    for(i=0,k=0;i<len;i++)
    {
        if((str[i]>='a' && str[i]<='z') || ( str[i]>='A' && str[i]<='Z'))
        {
            temp[k++] = str[i];

            //this will act as the length for the temporary array
            cnt++;
        }
    }


    //reversing the temporary array
    int start = 0, end=cnt-1;
    while(start<=end)
    {
        char l = temp[start];
        temp[start] = temp[end];
        temp[end] = l;

        start++;
        end--;
    }

    //if the character in the string is an "alphabet" replace it with the one is "temporary" array , else move on and check for the next occurrence
    for(int i=0,k=0;i<len;i++)
    {
        if((isalpha(str[i])))
        {
            str[i] = temp[k];
            k++;
        }
    }

    cout<<str;

}
