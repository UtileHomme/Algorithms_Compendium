// http://www.geeksforgeeks.org/search-insert-and-delete-in-an-unsorted-array/

// https://ideone.com/5zNlWh


#include <iostream>
using namespace std;

int Search(int a[],int n, int k)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            return i;
        }
    }
    return -1;
}

int main() {
    // your code goes here

    int a[] = {12,34,10,6,40};
    int k = 40;

    int size = sizeof(a)/sizeof(a[0]);

    int pos = Search(a,size, k);

    if(pos == -1)
    {
        cout<<"Element not found";
    }
    else
    {
        cout<<"Element found at position "<<pos+1;
    }
    return 0;
}
