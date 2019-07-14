// http://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/


//without recursion

#include <iostream>
using namespace std;

void ReverseArray(char a[], int n)
{
	int beg = 0;
	int end = n-1;

	while(beg<=end)
	{
		char temp = a[beg];
		a[beg] = a[end];
		a[end] = temp;

		beg++;
		end--;
	}
}
int main() {
	// your code goes here

	char a[] = "Jatin";

	int n = sizeof(a)/sizeof(a[0]);
	ReverseArray(a,n);

	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}

	return 0;
}
