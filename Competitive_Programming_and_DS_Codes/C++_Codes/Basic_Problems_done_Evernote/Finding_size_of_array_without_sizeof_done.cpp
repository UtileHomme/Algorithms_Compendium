// https://www.geeksforgeeks.org/how-to-find-size-of-array-in-cc-without-using-sizeof-operator/

#include <iostream>

using namespace std;

int main()
{
    int a[] = {1,2,3,4,5,6};

    int size = *(&a+1) - a;

    cout<<size;
    return 0;
}
