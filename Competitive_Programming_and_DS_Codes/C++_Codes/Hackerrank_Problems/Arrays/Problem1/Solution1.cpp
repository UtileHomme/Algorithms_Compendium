// https://ideone.com/E2gkDs

#include <iostream>

#define MAX 1111

using namespace std;


int main()
{

    int i=0;
    int n=0;

    int a[MAX];

    //enter the number of digits in the array
    cin>>n;

    //make the user input the data
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    }

    for(i=n-1;i>=0;i--)
    {
    	cout<<a[i]<<" ";
    }


    return 0;
}
