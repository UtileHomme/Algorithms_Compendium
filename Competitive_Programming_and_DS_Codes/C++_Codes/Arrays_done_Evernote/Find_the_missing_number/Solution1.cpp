// http://www.geeksforgeeks.org/find-the-missing-number/

// https://ideone.com/VQBrZ7

#include<iostream>

using namespace std;

int missingNumber(int a[],int size)
{
    int sum = 0;

    //We calculate the sum considering all the elements are present
    sum = ((size+1)*(size+2))/2;

    //subtract all given elements from the sum, to find the missing element
    for(int i=0;i<size;i++)
    {
        sum = sum - a[i];
    }

    //return the missing element
    return sum;
}

int main()
{
    int a[]={1,2,3,4,5,7,8,9};

    int size = sizeof(a)/sizeof(a[0]);

    int missingelement = missingNumber(a,size);

    cout<<"The missing element in the array is "<<missingelement;

    return 0;
}

// Time Complexity = O(n)

/*

There can be an overflow if "n" is large
- In order to avoid Integer Overflow, we can pick one number from known numbers and subtract one number from given numbers

*/
