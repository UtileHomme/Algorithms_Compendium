// https://ideone.com/JW6mUC

#include <iostream>
using namespace std;

int partition(int a[], int low, int high)
{
    if (low >= high)
    {
        return -1;
    }

    int l = low;
    int h = high;

    int mid = l + (h - l) / 2;
    int pivot = a[mid];

    //this condition ensures that after swapping happens the whole process is carried out again
    while (l <= h)
    {

        //while the elements from the left index are smaller than the pivot, they are at their correct position, so increment the index and check for the next element
        while (a[l] < pivot)
        {
            l++;
        }

        //while the elements from the right index are greater than the pivot, they are at their correct position, so decrement the index and check for the previous element
        while (a[h] > pivot)
        {
            h--;
        }

        //after the above processes have happened, we are at a point, where two misplaced elements are present, so we swap them and increment and decrement the indexes respectively
        if (l <= h)
        {
            int temp = a[l];
            a[l] = a[h];
            a[h] = temp;
            l++;
            h--;
        }
    }

    //after one complete traversal, return the position of the partition element
    return l;
}

void Quicksort(int a[], int low, int high)
{
    if (low < high)
    {
        //as soon as this executes the partition element is at its correct position with elements smaller that it on the left side(not necessarily sorted)
        //and elements larger than it on the right side
        int pe = partition(a, low, high);

        //these are used for running the partition function on the left and right subarray till they are sorted
        Quicksort(a, low, pe - 1);
        Quicksort(a, pe + 1, high);
    }
}

int main()
{
    // your code goes here
    int a[] = {5, 7, 6, 2, 1, 4};

    int len = sizeof(a) / sizeof(a[0]);

    int low = 0;
    int high = len - 1;

    Quicksort(a, low, high);

    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
