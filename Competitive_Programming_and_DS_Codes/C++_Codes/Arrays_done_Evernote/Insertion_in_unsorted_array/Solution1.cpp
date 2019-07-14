// http://www.geeksforgeeks.org/search-insert-and-delete-in-an-unsorted-array/

// https://ideone.com/LcyLtx

#include <iostream>
using namespace std;

int Isort(int a[], int size, int key, int cap)
{
	//if the position we have to enter the element is more than the allowed space for the array, return that position itself
	if(size>=cap)
	{
		return size;
	}

	//put the element at the end position
	a[size] = key;

	return (size+1);
}

int main() {
	// your code goes here

	int a[20] = {6,4,7,8,9};

	int size = 5;
	int allowed_size = sizeof(a)/sizeof(a[0]);

	int key = 10;
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";

	}
	cout<<endl;

	int n = Isort(a, size, key, allowed_size);

	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}

// Time Complexity = O(1)
