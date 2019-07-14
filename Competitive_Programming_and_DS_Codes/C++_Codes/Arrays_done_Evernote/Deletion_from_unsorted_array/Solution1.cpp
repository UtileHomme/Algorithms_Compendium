// http://www.geeksforgeeks.org/search-insert-and-delete-in-an-unsorted-array/


// https://ideone.com/6K302Z

#include<iostream>
using namespace std;

int FindEle(int a[], int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(key==a[i])
        {
            return i;
        }
    }

    return -1;
}

int DeleteEle(int a[], int size, int key)
{
	//return the position of the element to be deleted
    int pos = FindEle(a, size,key);

    if(pos == -1)
    {
        cout<<"No element found";
        return size;
    }

	//traverse from the position to be returned to the end, and shift all the elements till that position to the left
    for(int i=pos ;i<size;i++)
    {
    	a[i] = a[i+1];
    }

    //since there is one less element now, reduce the size of the array
    return (size-1);
}

int main()
{
    int a[] = {1,2,3,7,5};

    int size = sizeof(a)/sizeof(a[0]);

    int key = 7;

    int n = DeleteEle(a, size,key);

    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }

    return 0;
}
