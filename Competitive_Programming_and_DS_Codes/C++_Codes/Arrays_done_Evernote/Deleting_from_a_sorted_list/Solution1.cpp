// http://www.geeksforgeeks.org/search-insert-and-delete-in-a-sorted-array/

// https://ideone.com/QHfN80


#include <iostream>
using namespace std;

int bsearch(int a[],int l,int h,int k)
{
	if(h<l)
	{
		return -1;
	}

	int mid = l + (h-l)/2;

	if(a[mid]==k)
	{
		return mid;
	}
	else if(a[mid]<k)
	{
		return bsearch(a,mid+1,h,k);
	}
	else
	{
		return bsearch(a,l,mid-1,k);
	}
}

int SortedDelete(int a[], int n, int key)
{
	int pos = bsearch(a,0,n-1,key);

	if(pos==-1)
	{
		cout<<"Element not found";
		return n;
	}

	for(int i=pos;i<n;i++)
	{
		a[i] = a[i+1];
	}

	return n-1;
}

int main() {
	// your code goes here

	int a[] = {2,3,5,6,88,99};

	int n = sizeof(a)/sizeof(a[0]);

	int key = 5;

	n = SortedDelete(a,n,key);

	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}

	return 0;
}

// Time Complexity - O(n) - in worst case "n" elements might have to be moved
