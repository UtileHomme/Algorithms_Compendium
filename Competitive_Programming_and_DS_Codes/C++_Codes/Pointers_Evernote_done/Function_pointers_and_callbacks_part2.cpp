// Reference - https://www.youtube.com/watch?v=sxTFSDAZM8s&index=16&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&t=0s

#include <iostream>

using namespace std;

//compare function should return "1" if first element is of higher rank
// 0 if elements are equal
//-1 if second element has higher rank

int compare(int a, int b)
{
    if(a>b)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

void sort(int *a, int n,int (*compare) (int, int))
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(compare(a[j],a[j+1])>0)
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
    sort(a,6,compare);

    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }

}
