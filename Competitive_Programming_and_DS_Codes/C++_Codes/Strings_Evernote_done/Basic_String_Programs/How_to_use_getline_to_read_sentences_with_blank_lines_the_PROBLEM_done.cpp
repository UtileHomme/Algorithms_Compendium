// http://www.geeksforgeeks.org/how-to-use-getline-in-c-when-there-are-black-lines-in-input/

// A simple C++ program that uses getline to read
// input with blank lines
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string str;
	int t = 4;
	while (t--)
	{
		getline(cin, str);

		cout << str << " : newline" << endl;
	}
	return 0;
}
