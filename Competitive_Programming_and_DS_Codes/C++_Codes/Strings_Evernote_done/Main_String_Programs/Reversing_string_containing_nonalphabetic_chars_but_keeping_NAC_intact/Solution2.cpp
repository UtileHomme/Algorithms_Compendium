// http://www.geeksforgeeks.org/reverse-an-array-without-affecting-special-characters/


#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

void reverse(char *s)
{
    int len = strlen(s);
    int l = 0;
    int end = len-1;

    while(l<end)
    {
        if(!isalpha(s[l]))
        {
            l++;
        }
        else if(!isalpha(s[end]))
        {
            end--;
        }
        else
        {
            char z = s[l];
            s[l] = s[end];
            s[end] = z;
            l++;
            end--;
        }
    }
}

int main()
{
    char s[]="a!!!b.c.d,e'f,ghi";

    cout<<s<<endl;

    reverse(s);

    cout<<s;
}
