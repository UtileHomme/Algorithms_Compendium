#include <iostream>

using namespace std;

void InsertionSort(int a[], int n)
{
    for(int i=n-1;i>=0;i--)
    {
        int key = a[i];
        int j = i+1;

        while(j<=n-1 && a[j]>key)
        {
            a[j-1] = a[j];
            j++;
        }

        a[j-1] = key;
    }
}

int main()
{
    int a[] = {1,5,4,3,2};

    int len = sizeof(a)/sizeof(a[0]);

    InsertionSort(a, len);

    for(int i=0;i<len;i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}
