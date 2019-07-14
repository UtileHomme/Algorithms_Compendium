// Not working yet

// http://www.geeksforgeeks.org/remove-spaces-from-a-given-string/

#include <iostream>
#include <string.h>

using namespace std;

//we need to return pointer to access the address of the first element
int removeSpace(char *str)
{
    int i=0;

    int length;
    length = strlen(str);

    int j=0;

    //till '\0' isn't encountered, please traverse
    for(i=0;str[i];i++)
    {
        if(str[i]==' ')
        {
            for(j=i;j<length;j++)
            {
                str[j] = str[j+1];
            }
            length--;
        }
        else
        {
            continue;
        }
    }
    str[length++]='\0';

    return length;
 }

int main()
{
    char str[] = "j    a  t i n";
    int length = removeSpace(str);

    for(int i =0;i<length;i++)
    {
        cout<<str[i];
    }
    return 0;
}
