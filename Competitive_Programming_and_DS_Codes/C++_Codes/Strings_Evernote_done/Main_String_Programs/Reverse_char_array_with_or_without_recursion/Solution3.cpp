// http://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/


#include <iostream>
#include <string.h>

using namespace std;

void ReverseArray(char a[], int n)
{
    int len = strlen(a);

    for(int i=0;i<len/2;i++)
    {
        int start = i;
        int end = len - i - 1;

        char temp = a[start];
        a[start] = a[end];
        a[end] = temp;
    }

}
int main() {
    // your code goes here

    char a[] = "Jatin";

    int n = sizeof(a)/sizeof(a[0]);
    ReverseArray(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}
