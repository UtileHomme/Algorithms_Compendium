// http://www.geeksforgeeks.org/bubble-sort/

#include <iostream>

using namespace std;

void BubbleSort(int a[] , int n)
{
    int i,j,temp;

    bool swapped;

    //decides the number of passes that happen till the array is sorted
    //go till the penultimate element
    for(i=0;i<n-1;i++)
    {
        //we have to start from the first element every time and check out of the current element and its right neighbour, which is larger

        //after every "pass", we will have the largest element in the end
        //"n-i-1" ensures that after one pass , "i" elements are left out for swapping
        for(j=0;j<(n-i-1);j++)
        {
            //if current element is larger, swap , else continue to next element
            //if the swapping value is not "reset" to "true" at any time during the second loop, it means the elements are already sorted, hence break out of the first loop
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]= temp;
                swapped = true;
            }
        }

        if(swapped = false)
        {
            break;
        }
    }
}

void printarray(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(a)/sizeof(a[0]);

    BubbleSort(a,n);
    printarray(a,n);

    return 0;
}
