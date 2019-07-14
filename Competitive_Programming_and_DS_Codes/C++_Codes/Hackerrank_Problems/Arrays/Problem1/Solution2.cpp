// https://ideone.com/XBZt4O

#include <iostream>
using namespace std;

#define MAX 1111

int main() {
	// your code goes here
	int a[MAX];

	int i=0;
	int n=0;

	//enter the number of inputs to take
	cin>>n;

	//enter the data
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	i=n-1;

	while(i>=0)
	{
		cout<<a[i--]<<" ";
	}


	return 0;
}
