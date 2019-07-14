// CCI Eg 1 (page 28)

#include <iostream>

using namespace std;

int main()
{
    int a[] = {1,2,3,4,6};

    int n = sizeof(a)/sizeof(a[0]);
    int sum=0;

    int product=1;

    for(int i=0; i<n;i++)
    {
        sum += a[i];
    }

    for(int i=0; i<n;i++)
    {
        product *= a[i];
    }

    cout<<"sum is "<<sum<<endl;;
    cout<<"product is "<<product;
}

// Time Compexlity = O(n)
