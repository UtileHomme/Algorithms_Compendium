// http://www.geeksforgeeks.org/search-insert-and-delete-in-a-sorted-array/

// https://ideone.com/a4hu65

#include <iostream>
using namespace std;

//"n" is the actual number of elements in the array
int SortedInsert(int a[], int n, int capacity, int k)
{
	//if there is no space left and the array is completely filled
	if(n>capacity)
	{
		return n;
	}

	int i=0;

	//until the key is less than the right most elements, keep shifting the elements to the right
	//as soon as an element is found where k>a[i], stop the loop
	for(i=n-1; (i>=0 && k<a[i]);i--)
	{
		a[i+1] = a[i];
	}

	//by now an extra space is present with the element on the left less than the key and the element on the
	//right more than the key. Put the key to its position
	a[i+1] = k;

	//send back the new size of the array
	return (n+1);
}

int main()
{
	// your code goes here

	int a[20] = {2,3,5,6,88,99};

	int n = 6;
	int capacity = sizeof(a)/sizeof(a[0]);

	int k = 77;

	n = SortedInsert(a,n,capacity,k);

	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
