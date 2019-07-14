// https://ideone.com/VGJ5ys

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int partition(int a[], int low, int high)
{
    //used for maintaining the indexes of all larger elements
    int i = low;

    //pivot is the last element of the current array/subarray
    int pivot = a[high];

    //we run the loop from starting to current sub array to the element before the pivot element
    for(int j=low;j<=(high-1);j++)
    {
        if(a[j]<=pivot)
        {
            //swap the element lower than the pivot element with that of larger than the pivot element

            int temp = a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
        }
    }

    //swap the final remaining larger element with that of the pivot
    int temp = a[i];
    a[i] = a[high];
    a[high]= temp;

    //return the position of the partition element to be used for further partitioning
    return (i);
}

int randomized_partition(int a[], int low, int high)
{
    //for finding a random number in a given range
    int random_index = low + rand()%(high-low+1);

    cout<<random_index<<endl;
    //swap this indexed value with that of the value present at highest index
    int temp = a[random_index];
    a[random_index] = a[high];
    a[high] = temp;

    //now the random element is at the last position.
    //this will be chosen as the pivot (even though this is the last element in the present array it is not the last element in the original array. Might be better in case of sorted arrays)
    return partition(a, low, high);
}

void Quicksort(int a[], int low, int high)
{
    if(low<high)
    {
        //as soon as this executes the partition element is at its correct position with elements smaller that it on the left side(not necessarily sorted)
        //and elements larger than it on the right side
        int pe = randomized_partition(a, low, high);

        //these are used for running the partition function on the left and right subarray till they are sorted
        Quicksort(a, low, pe-1);
        Quicksort(a, pe+1, high);
    }
}

int main() {
    // your code goes here
    int a[] = {7,8,1,9,2,6};

    int len = sizeof(a)/sizeof(a[0]);

    int low = 0;
    int high = len - 1;

    Quicksort(a,low,high);

    for(int i=0;i<len;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
