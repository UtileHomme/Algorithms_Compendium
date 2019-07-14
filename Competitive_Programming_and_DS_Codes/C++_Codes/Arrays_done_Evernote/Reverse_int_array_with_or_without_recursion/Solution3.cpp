// http://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

// https://ideone.com/rH3LCD


#include <iostream>

using namespace std;

int main()
{
    int a[] = {5,3,6,77,8,44};

    int len = sizeof(a)/sizeof(a[0]);

    for(int i=0;i<len/2;i++)
    {
        int start = i;
        int end = len-i-1;

        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;



    }
    for(int i=0;i<len;i++)
    {
        cout<<a[i]<<endl;
    }


    return 0;
}

// Time Complexity = O(n/2) = O(n)
