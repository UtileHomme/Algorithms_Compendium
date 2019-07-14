// http://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

// https://ideone.com/C5vahc


//without recursion

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a[5] = {1,2,3,4,5};

	int size = sizeof(a)/sizeof(a[0]);

	//print the normal array
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}

	//logic for reversing the array

	int first=0;
	int last=size-1;


	while(first<=last)
	{
		int temp = a[first];
		a[first]=a[last];
		a[last]=temp;

		//increase the index of the beginning part to get closer to the middle
		first++;

		//decrease the index of the end part to get closer to the middle
		last--;
	}

	cout<<endl;
	//print the reversed array
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}

	return 0;
}

// Time Complexity = O(n)
