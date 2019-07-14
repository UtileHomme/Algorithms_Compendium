// http://www.geeksforgeeks.org/c-program-find-largest-element-array/

// https://ideone.com/COyWZB

#include <iostream>

using namespace std;

int largest(int a[], int n)
{
    //initialize the first element as "MAX"
    int max = a[0];

    //treaverse through the array and try to find the actual max
    for(int i=0;i<n;i++)
    {
        //if the current index "element" is more than the current "Max", make that element the current "Max"
        //keep trying this , till the end of the array
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    return max;
}

int main()
{
    int a[] = {10,44,33,77,101};

    int size = sizeof(a)/sizeof(a[0]);

    int max = largest(a, size);

    cout<<"The Max element in the array is "<<max;
}

// Time Complexity = O(n)
