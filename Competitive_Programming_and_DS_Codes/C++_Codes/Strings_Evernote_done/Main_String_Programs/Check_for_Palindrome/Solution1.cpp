// https://www.geeksforgeeks.org/c-program-check-given-string-palindrome/


#include <iostream>
#include <string.h>

using namespace std;

bool checkPalindrome(char a[], int len)
{
    int start = 0;
    int end = len-1;
    while(start<end)
    {
        if(a[start]==a[end])
        {
            start++;
            end--;
        }
        else
        {
            return false;
        }
    }

    return true;
}

int main()
{
    char a[] = "namana";

    int len = strlen(a);
    int output = checkPalindrome(a,len);
    if(output==0)
    {
        cout<<"Not a palindrome";
    }
    else
    {
        cout<<"Palindrome found";
    }
}
