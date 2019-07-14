// Reference - https://www.youtube.com/watch?v=38khfegkGPU
// Doesn't work

#include <iostream>

using namespace std;

int main()
{
    int i = 57674543;

    char* cPtr1 = (char*)&i;

    float j = 2456.85f;
    char *cPtr2= (char*)&j;

    cout<<"Address of i using cPtr1 is "<<cPtr1<<endl;
    cout<<"Address of j using cPtr2 is "<<cPtr2<<endl;

    cout<<"Value of integer using cPtr1 is "<<*cPtr1<<endl;
    cout<<"Value of integer using cPtr2 is "<<*cPtr2<<endl;

    return 0;
}
