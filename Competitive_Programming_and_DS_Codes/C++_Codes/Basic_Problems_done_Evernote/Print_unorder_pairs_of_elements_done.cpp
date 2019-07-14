// CCI Eg 3 (page 28)

#include <iostream>

using namespace std;

int main()
{
    int a[] = {1,2,3,4,5};

    int n = sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            cout<<a[i]<<" "<<a[j]<<endl;
        }
    }


    return 0;
}

// Time Complexity = O(n^2)
