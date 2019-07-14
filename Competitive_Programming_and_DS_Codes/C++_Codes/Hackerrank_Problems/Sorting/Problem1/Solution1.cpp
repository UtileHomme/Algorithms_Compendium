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


    int i = n-1;

    int key = a[i];

    /*
   for(i = n-1; i>0 ; i--)
    {

       if(key<=a[i-1])
       {
        a[i] = a[i-1];
       }
        for(int j=0;j<n;j++)
        {
            cout<<a[j];
        }


        cout<<endl;
    }
    */

    while(i>0 && key<a[i-1])
    {
        a[i] = a[i-1];
        i--;
         for(int j=0;j<n;j++)
        {
            cout<<a[j]<<" ";
        }


        cout<<endl;
    }

     a[i] = key;

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
