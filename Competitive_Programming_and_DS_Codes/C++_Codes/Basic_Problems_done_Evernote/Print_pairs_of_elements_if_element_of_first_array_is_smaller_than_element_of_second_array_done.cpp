#include <iostream>

using namespace std;

int main()
{

    int a[] = {5,7,6,2};
    int b[] = {1,9,8,7};

    int n1 = sizeof(a)/sizeof(a[0]);
    int n2 = sizeof(b)/sizeof(b[0]);

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(a[i]<b[j])
            {
                cout<<a[i]<<" "<<b[j]<<endl;
            }
        }
    }

    return 0;
}

// Time Complexity = O(n1 * n2);
