// http://www.geeksforgeeks.org/search-insert-and-delete-in-a-sorted-array/

// https://ideone.com/QHfN80

#include <iostream>
using namespace std;

int binarySearch(int a[], int low, int high, int key, int &count)
{
    count++;

    cout<<"The iteration is at count "<<count<<endl;

    cout<<"Value of Low "<<low<<endl;
    cout<<"Value of High "<<high<<endl;

    if(high<low)
    {
        cout<<"Value of "<<high<< " is lesser than "<<low<<endl;
        return -1;
    }

    int mid = low + (high-low)/2;

    if(a[mid]==key)
    {
        cout<<"Found the position at"<<" "<<mid<<endl;
        return mid;
    }
    else if(a[mid]<key)
    {

        return binarySearch(a, mid+1, high, key, count);
    }
    else if(a[mid]>key)
    {
        return binarySearch(a, low, mid-1, key,count);
    }
}

int sortedDelete(int a[], int size, int key)
{
    int count =0;
    int pos = binarySearch(a, 0, size-1, key, count);

    int shiftCount = 0;

    if(pos==-1)
    {
        cout<<"element not found"<<endl;
        return size;
    }

    for(int i=pos; i<size; i++)
    {
        a[i] = a[i+1];
        ++shiftCount;
    }

    cout<<"Total Positions changed "<<shiftCount<<endl;

    return size-1;
}

int main()
{
    int a[] = {2,3,5,88,522};

    int size = sizeof(a)/sizeof(a[0]);

    int key = 2;

    int finalSize = sortedDelete(a,size,key);

    for(int i=0;i<finalSize; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}

// Time Complexity - O(n) - in worst case "n" elements might have to be moved
