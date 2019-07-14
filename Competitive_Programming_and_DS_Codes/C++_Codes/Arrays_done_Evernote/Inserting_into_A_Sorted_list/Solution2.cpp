// http://www.geeksforgeeks.org/search-insert-and-delete-in-a-sorted-array/

// https://ideone.com/dLicaD

#include <iostream>
using namespace std;

	int SortedInsert(int a[], int n, int capacity, int k)
	{
		//if there is no space to fill the new element
		if(n>=capacity)
		{
			return n;
		}

		int i = n-1;
		while(i>=0 && k<a[i])
		{
			//go to the previous positioned element index
			a[i+1] = a[i];
			i--;
		}

		a[i+1] = k;

		return (n+1);
	}

int main() {
	// your code goes here

	int a[20] = {2,3,7,9,11,13};

	//this will give 20
	int allowed_size = sizeof(a)/sizeof(a[0]);

	int n = 6;

	int key = 1;

	int z = SortedInsert(a, n, allowed_size,key);

	for(int i=0;i<z;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
