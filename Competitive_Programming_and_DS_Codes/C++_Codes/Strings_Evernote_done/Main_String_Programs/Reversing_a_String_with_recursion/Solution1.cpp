// http://www.geeksforgeeks.org/reverse-a-string-using-recursion/


#include <iostream>
#include <string>

using namespace std;

	void ReverseString(string s, int k)
	{
		if(s.length()==k)
		{
			return;
		}

        //Since this is a recursion, all the values will be stored in the stack from the beginning of the string to the end
        //After all recursion operations have been done, it will be printed from the top, thus giving us the reverse string

		ReverseString(s,k+1);
		cout<<s[k]<<" ";
	}

int main()
{
	// your code goes here

	string s = "Jatin";

    //we are passing "0" so that we can compare it with the actual length of the string and return in case the string is empty
	ReverseString(s,0);

	return 0;
}
