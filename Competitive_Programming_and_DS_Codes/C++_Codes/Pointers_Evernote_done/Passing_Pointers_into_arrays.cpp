// Reference - https://www.youtube.com/watch?v=c51VbMnBucc&list=PLTZbNwgO5ebrkVhq8eoVMwrvFBSNHx87o&t=0s&index=7

#include <iostream>

using namespace std;

void display(int *pArray, int lenArray)
{
    for(int i=0;i<lenArray;i++)
    {
        cout<<"Element and its address "<<*(pArray+i)<<pArray+i<<endl;
    }
}

void display2(int pArray[], int lenArray)
{
    for(int i=0;i<lenArray;i++)
    {
        cout<<"Element and its address "<<pArray[i]<<&pArray[i]<<endl;
    }
}


int main()
{
    int numArray[5] = {2,5,87,24,56};

    display(&numArray[0], 5);
    cout<<endl;

    display2(numArray,5);
    return 0;
}
