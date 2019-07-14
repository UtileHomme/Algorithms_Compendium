// http://www.geeksforgeeks.org/find-the-largest-three-elements-in-an-array/

// https://ideone.com/xzQkV4

#include <iostream>
#include <stdio.h>
#include <climits>

using namespace std;

int LargestThree(int a[], int n)
{
    int third = INT_MIN;
    int second = INT_MIN;
    int first = INT_MIN;

    int i = 0;
    for(i=0; i<n ; i++)
    {
        if(a[i]>first)
        {
            third = second;
            second = first;
            first = a[i];
        }

        //this condition ensures that during the traversal, whatever element is just smaller than the current first, becomes the second element
        //that is why "else if" is required
        else if(a[i]>second)
        {
            third = second;
            second = a[i];
        }
        else if(a[i]>third)
        {
            third  = a[i];
        }
    }

    cout<<"The Largest three elements are "<<first<<" "<<second<<" "<<third;

    return 0;
}

int main()
{
    int a[] = {1,3,22,2,67,45,34,11};
    int size = sizeof(a)/sizeof(a[0]);

    LargestThree(a,size);

    return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(1)
