#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 1111

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a[MAX];

    int n;
    //enter the number of elements in the array
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }


    int key = a[n-1];
    int j = n-2;

    while(j>=0 && a[j]>key)
    {
        a[j+1] = a[j];
        j--;

        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    a[j+1] = key;


    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
