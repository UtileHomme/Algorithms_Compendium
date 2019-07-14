// http://www.geeksforgeeks.org/insertion-sort/

#include <iostream>

using namespace std;

//we are assumming there are two subarrays: one sorted and one unsorted
void InsertionSort(int a[], int n)
{
    int i, key, j;

    for(i=1;i<n;i++)
    {
        //this initializes the key with the beginning value of what we assume as an "unsorted" array
        key = a[i];

        //initialize the index with the end of the "sorted" array
        j = i-1;

        //we are checking whether the end of what we assume as the sorted array is more than that of the beginning of what we assume the "unsorted" array
        //if yes, then our assumption of "sorted array" is wrong, and we need to shift the sorted array value by one to accommodate the "key"

        //we keep on doing this for all values of the assumed "sorted" array from last value to first value
        while(a[j]>key && j>=0)
        {
            a[j+1] = a[j];
            j = j - 1;
        }

        //after we are sure no more elements need to be move to the right , we put the value of "key" to its appropriate position
        a[j+1] = key;

    }

}

int main()
{
    int a[] = {25,1,4,2,8};
    int size = sizeof(a)/sizeof(a[0]);

    InsertionSort(a,size);

    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
}
