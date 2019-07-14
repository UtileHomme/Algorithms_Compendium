// Refer CCI V.12 (Page number 38)

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

int binary_search(int a[], int low, int high ,int x)
{

  while(low<=high)
  {
    int mid = low + (high-low)/2;

    if(a[mid]==x)
    {
      return 1;
    }
    else if(a[mid]<x)
    {
      return binary_search(a, mid+1, high,x);
    }
    else
    {
      return binary_search(a, low, mid-1,x);

    }
  }

  return 0;
}

int main()
{
  int a[] = {5,4,3,7,1};

  int b[] = {44,3,22,1,4};

  int b_len = sizeof(b)/sizeof(b[0]);

  MergeSort(b, 0, b_len-1);

  int a_len = sizeof(b)/sizeof(b[0]);

  int count=0;

  for(int i=0;i<a_len;i++)
  {
    if(binary_search(b, 0, b_len-1, a[i])>0)
    {
      count++;
    }
  }

  cout<<"No of matching digits are "<<count;
  return 0;
}

// Time Complexity = O(b logb + a logb)
