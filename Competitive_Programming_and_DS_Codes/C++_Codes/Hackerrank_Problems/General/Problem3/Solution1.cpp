// https://ideone.com/l9DRMw

#include <iostream>
using namespace std;

#define MAX 1111

int main() {
	// your code goes here

	int a[MAX];
	int n;
	int i=0;
	int pcnt=0;
	int zcnt=0;
	int ncnt=0;

	//enter the number of integers in the array
	cin>>n;

	//enter the array data
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	//calculate the counts of positive/ negative and zero numbers
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			pcnt++;
		}
		else if(a[i]<0)
		{
			ncnt++;
		}
		else if(a[i]==0)
		{
			zcnt++;
		}

	}

	cout<<float(pcnt)/float(n)<<endl;
	cout<<float(ncnt)/float(n)<<endl;
	cout<<float(zcnt)/float(n)<<endl;

	return 0;
}
