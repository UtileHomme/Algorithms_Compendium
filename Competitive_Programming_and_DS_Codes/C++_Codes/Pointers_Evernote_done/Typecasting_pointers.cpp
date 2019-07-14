// Reference - https://www.youtube.com/watch?v=38khfegkGPU

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int i= 5;

    int *iPtr = &i;

    float j = 2.456f;
    float *fPtr = &j;

    char c='A';
    char *cPtr = &c;

    cout<<"Address of integer pointer "<<iPtr<<endl;
    cout<<"Address of float pointer "<<fPtr<<endl;
    cout<<"Address of char pointer "<<cPtr<<endl;

    cout<<"Value of integer pointer "<<*iPtr<<endl;
    cout<<"Value of float pointer "<<*fPtr<<endl;
    cout<<"Value of char pointer "<<*cPtr<<endl;

    cout<<"Size of integer pointer "<<sizeof(iPtr)<<endl;
    cout<<"Size of float pointer "<<sizeof(fPtr)<<endl;
    cout<<"Size of char pointer "<<sizeof(cPtr)<<endl;

    return 0;
}
