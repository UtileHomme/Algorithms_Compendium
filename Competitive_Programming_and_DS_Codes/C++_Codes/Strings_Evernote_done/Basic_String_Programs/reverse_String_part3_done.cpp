// https://www.geeksforgeeks.org/reverse-a-string-in-c-cpp-different-methods/

#include<string.h>
#include <iostream>

using namespace std;

void reverse(char *str)
{
    int i, len;

    len = strlen(str);

    for(i=len; i>=0; i--)
    {
        cout<<*(str+i);
    }

}

int main()
{
    char a[] = "Geeks for Geeks";

    reverse(a);
    return 0;
}
