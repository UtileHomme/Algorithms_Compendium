// http://www.geeksforgeeks.org/find-the-number-occurring-odd-number-of-times/

// https://ideone.com/vmnFgM

#include<iostream>

using namespace std;

int oddElement(int a[], int size)
{
    //compare the first loop element with all the elements in the second loop
    for(int i=0;i<size;i++)
    {

        int count = 0;

        for(int j=0;j<size;j++)
        {
            //whenever the element is equal to another, increment the count by 1
            if(a[i]==a[j])
            {
                count++;
            }
        }
        //for the element whose count has been found,check if it is divisble by 2 or not
        if(count%2!=0)
        {
            //if not, then it is the odd element we are looking for, therefore return it
            return a[i];
        }
    }
    return -1;
}

int main()
{
        int a[] = {1,2,3,2,3,1,3};
        int size = sizeof(a)/sizeof(a[0]);

        int element = oddElement(a,size);

        if(element==-1)
        {
            cout<<"No element with odd number of times occurrence exists";
        }
        else
        {
            cout<<"The element occurring odd number of times is "<<element;
        }
}
