// http://www.geeksforgeeks.org/find-the-number-occurring-odd-number-of-times/

//iterative method
// https://ideone.com/KQp4gb

#include <iostream>

using namespace std;

int main()
{
    int a[] = {2, 3, 5, 5, 5, 2, 4, 3, 5, 2, 4, 4, 2};

    int size = sizeof(a)/sizeof(a[0]);

    int count = 0;

    //this sets the element to be compared
    for(int i=0;i<size;i++)
    {
        // this ensures that the present element is compared with the elements before it as well
        for(int j=0;j<size;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }

        //check if the count is odd or even
        if(count%2!=0)
        {
            cout<<a[i]<<" occurs odd number of times";
            break;
        }
    }

    return 0;
}
