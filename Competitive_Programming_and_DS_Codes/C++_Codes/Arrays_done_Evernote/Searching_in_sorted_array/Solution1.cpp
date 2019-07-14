// http://www.geeksforgeeks.org/search-insert-and-delete-in-a-sorted-array/

// https://ideone.com/AnRqt8

#include <iostream>
using namespace std;

int bsearch(int a[], int l, int h, int x)
{
	if(l<=h)
	{
		int mid = l + (h-l)/2;

		if(x<a[mid])
		{
			return bsearch(a,l,mid-1,x);
		}
		else if(x>a[mid])
		{
			return bsearch(a,mid+1,h,x);
		}
		else
		{
			return mid;
		}
	}
		return -1;
}

int main() {
	// your code goes here

	int a[] = {2, 3, 4, 10, 40};
	int x;

	int n = sizeof(a)/sizeof(a[0]);

	int l=0, h=n-1;
	//enter the value to be searched

	int pos = bsearch(a,l,h,10);

	if(pos==-1)
	{
		cout<<"Element not found";
	}
	else
	{
		cout<<"Element foud at position "<<pos+1;
	}
	return 0;
}
