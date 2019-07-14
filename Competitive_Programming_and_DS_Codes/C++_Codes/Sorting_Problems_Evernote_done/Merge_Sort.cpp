// https://ideone.com/JoYai0

#include <iostream>
using namespace std;

void Merge(int a[], int l, int mid, int h)
{
	int n1 = mid - l +1;
	int n2 = h - mid;

	int x[n1];
	int y[n2];

	//pass the elements of the left part into a temporary array
	//this array is dynamically created all the time
	for(int i =0; i<n1;i++)
	{
		x[i] = a[l+i];
	}

	for(int j=0;j<n2;j++)
	{
		y[j] = a[mid+1+j];
	}


	int i=0;
	int j=0;
	int k = l;

	//run this loop till the current value of each "i" and "j" are less than their respective halved part lengths
	while(i<n1 && j<n2)
	{
		if(x[i]<=y[j])
		{
			a[k] = x[i];
			i++;
		}

		else
		{
			a[k] = y[j];
			j++;
		}
		k++;
	}

	//if all indexes of the right part have been exhaused
	while(i<n1)
	{
			a[k] = x[i];
			i++;
			k++;
	}

	//if all indexes of the left part have been exhaused
	while(j<n2)
	{
			a[k] = y[j];
			j++;
			k++;
	}
}


void MergeSort(int a[], int l, int h)
{
	if(l<h)
	{
		int mid = l + (h-l)/2;

		//keep dividing the left sided parts into halves till only single elements are left
		MergeSort(a, l , mid);

		//keep dividing the rigt sided parts into halves till only single elements are left
		//this happens after all the elements of the first left side parts are sorted and merged
		MergeSort(a, mid+1,h);

		//merging starts on the assumption that all elements from l to mid and mid+1 to h are sorted
		Merge(a, l , mid, h);
	}
}
int main() {
	// your code goes here
	int a[] = {5,7,2,1,9,10,6};

	int size = sizeof(a)/sizeof(a[0]);

	int l = 0;
	int h = size-1;

	MergeSort(a, l ,h);

	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
