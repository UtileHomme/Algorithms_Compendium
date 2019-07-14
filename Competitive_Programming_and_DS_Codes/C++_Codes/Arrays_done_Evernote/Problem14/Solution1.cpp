#include <iostream>

using namespace std;

int partition(int a[], int low, int high)
{
    int i = low;
    int pivot = a[high];

    for(int j=low;j<high;j++)
    {
        if(a[j]<=pivot)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
        }
    }

    int z = a[i];
    a[i] = a[high];
    a[high]= z;

    return (i);
}

void Quicksort(int a[], int low, int high)
{
    int partition1;
    if(low<high)
    {
        partition1 = partition(a, low, high);
        Quicksort(a, low, partition1-1);
        Quicksort(a, partition1+1, high);
    }
}

int Sum_in_Array(int a[], int x, int n)
{
    Quicksort(a, 0,n-1);

    int low = 0;
    int high = n-1;

    while(low<high)
    {
    if(a[low]+a[high]==x)
    {
        return 1;
    }
    else if(a[low]+a[high]<x)
    {
        low++;
    }
    else
    {
        high--;
    }
    }

    return 0;
}
int main()
{
    int a[] = {1, 4, 45, 7, 10, 88};

    int x = 16;

    int len = sizeof(a)/sizeof(a[0]);

    int k = Sum_in_Array(a, x,len);

    if(k==1)
    {
        cout<<"elements with sum "<<x<<" found";
    }
    else
    {
        cout<<"elements with sum "<<x<<" not found";
    }
    return 0;
}
