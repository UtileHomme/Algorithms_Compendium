// Reference - https://www.youtube.com/watch?v=CpjVucvAc3g&index=7&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&t=0s

#include <iostream>

using namespace std;

int SumOfElements(int *a, int size)
{
    //here only a pointer to the array is created and the entire array is not copied
    int sum = 0;

    for(int i=0;i<size;i++)
    {
        sum += a[i];
    }

    return sum;
}

int main()
{
    int a[] = {1,2,3,4,5};

    int size = sizeof(a)/sizeof(a[0]);
    int total = SumOfElements(a,size);


    cout<<total;
}
