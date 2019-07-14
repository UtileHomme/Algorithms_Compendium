// http://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

// https://ideone.com/HoUf4J


//with recursion

#include <iostream>
using namespace std;

void reverseArray(int a[],int first,int end)
{
	if(first>=end)
	{
		return;
	}

		int temp;
		temp = a[first];
		a[first]= a[end];
		a[end]=temp;

		reverseArray(a,first+1,end-1);

}

int main() {
	// your code goes here

	int a[] = {2,3,4,5,6};
	int size = sizeof(a)/sizeof(a[0]);
  // cout<<size;
	int start = 0;
	int last = size-1;

	reverseArray(a,start,last);

	//print the new array
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}

	return 0;
}

// Time Complexity = O(n)
