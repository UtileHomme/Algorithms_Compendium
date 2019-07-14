// http://www.geeksforgeeks.org/return-maximum-occurring-character-in-the-input-string/


#include <iostream>
#include <string.h>
#define size 256

using namespace std;

char getMaxChar(char *str)
{
    int count[size]= {0};

    int len = strlen(str);

    for(int i=0;i<len;i++)
    {
        //here, the characters are being passed as an index of the count array
        //every index holds the total count of the number of the times that character has occurred
        count[int(str[i])]++;
    }

    //presently all characters with their counts have been accounted for

    int max = -1;
    char result;

    for(int j=0;j<len;j++)
    {
        //if the current count of the given character is more than the " present max" value, make that count the max value
        if(count[int(str[j])]>max)
        {
            max=count[int(str[j])];
            //update result with the current character with max value
            result = str[j];
        }
    }

    return result;
}

int main()
{
    char str[] = "temple taken out of the groundtttt";
    cout <<"Max occurring character is "<<getMaxChar(str);
}

// Time Complexity = O(n)
// Space Complexity = O(1) because we are using fixed space(Hash_array) irrespective of input string size
