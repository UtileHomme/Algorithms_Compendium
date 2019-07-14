#include <iostream>

using namespace std;

int main()
{
    int v[3] = {10,100,200};

//assigning the address of first location in the array to the pointer
    int *ptr = v;

    for(int i=0;i<3;i++)
    {
        cout<<"Value "<<*ptr<<endl;
        cout<<"Address of that value"<<ptr<<endl;

        //increment the address by 1 location
        ptr++;
    }
}
