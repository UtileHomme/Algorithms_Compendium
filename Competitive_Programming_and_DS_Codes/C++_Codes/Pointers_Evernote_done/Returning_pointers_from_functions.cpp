// Reference - https://www.youtube.com/watch?v=RkaOi8Ov-_c

#include <iostream>

using namespace std;

int *foolPtr()
{
    int temp = 7;
    return &temp;
}

int *allocPtronHeap(int S)
{
    int *temp = new int;
    return temp;
}

int main()
{
    int *iPtr = foolPtr();

    cout<<"Value of foolPtr is "<<*iPtr<<endl;
    iPtr = allocPtronHeap(10);
    return 0;
}

/*
 - Whenever a function is called, it goes into a stack
 - but when the function returns to main, the whole function allocated block is gone
*/
