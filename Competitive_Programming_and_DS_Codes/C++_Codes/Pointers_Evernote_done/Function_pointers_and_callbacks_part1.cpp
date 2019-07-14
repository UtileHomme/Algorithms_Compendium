

#include <iostream>

using namespace std;

void sort(int *a, int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main()
{
    int a[] = {3,2,1,5,4,6};
    sort(a,6);

    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }

}
