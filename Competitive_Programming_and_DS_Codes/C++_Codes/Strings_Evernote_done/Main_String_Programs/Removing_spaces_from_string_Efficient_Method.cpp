// http://www.geeksforgeeks.org/remove-spaces-from-a-given-string/

#include <iostream>

using namespace std;

//we need to return pointer to access the address of the first element
void removeSpace(char *str)
{
    int cnt = 0;

    //till '\0' isn't encountered, please traverse
    for(int i=0;str[i];i++)
    {
        //if the character is a non-spaced character, add this character freshly into the new index
        if(str[i]!=' ')
        {
            str[cnt++] = str[i];
        }
    }

    //let last index be null
    str[cnt]= '\0';
}

int main()
{
    char str[] = "j   a    t    i   n";
    removeSpace(str);
    cout<<str;
    return 0;
}
