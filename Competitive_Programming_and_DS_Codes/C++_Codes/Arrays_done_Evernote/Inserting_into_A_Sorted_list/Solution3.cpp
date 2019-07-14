// http://www.geeksforgeeks.org/search-insert-and-delete-in-a-sorted-array/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

	vector <int> SortedInsert(vector <int> a , int k)
	{
		int i = a.size()-1;

		// returns position of element which has value NOT LESS THAN the given value
		vector <int>::iterator i1 = lower_bound(a.begin(), a.end(), k);

		a.insert(i1,k);

		return a;
	}

int main() {
	// your code goes here

	vector <int> a = {2,3,7,9,11,13};

	int key = 8;

	vector <int> B = SortedInsert(a,key);

	for(int i=0;i<B.size();i++)
	{
		cout<<B[i]<<endl;
	}
	return 0;
}
