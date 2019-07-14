// http://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/


//with recursion

#include <iostream>
using namespace std;

void ReverseArray(char a[], int start, int end)
{

	if(start>end)
	{
		return;
	}

	int temp = a[start];
	a[start] = a[end];
	a[end] = temp;

	return ReverseArray(a, start+1, end-1);

}

int main() {

	char a[] = {'a','b','c','d','e','f'};

	int n = sizeof(a)/sizeof(a[0]);

	int start = 0;
	int end = n-1;
	ReverseArray(a,start,end);

	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}

	return 0;
}
