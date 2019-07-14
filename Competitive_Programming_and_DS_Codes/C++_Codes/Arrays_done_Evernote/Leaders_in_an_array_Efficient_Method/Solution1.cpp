// http://www.geeksforgeeks.org/leaders-in-an-array/

// https://ideone.com/bAlI6y

//efficient method

#include <iostream>

using namespace std;

void printLeaders(int a[],int  n)
{
    //set the last element is the max element
    int max_right = a[n-1];

    //since the last element is always the leader, print it
    cout<<max_right<<endl;

    //Traverse from one element before the last, and compare it the current "max_right" element
    for(int i=n-2;i>=0;i--)
    {
        // if the max_right is less than the current element, change the max_right to that element and print it as the leader
        if(max_right<a[i])
        {
            max_right = a[i];
            cout<<max_right<<endl;
        }
    }
}

int main()
{
    int a[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(a)/sizeof(a[0]);

    printLeaders(a,n);

    return 0;
}
