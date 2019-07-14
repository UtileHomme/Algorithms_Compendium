// Reference - https://www.youtube.com/watch?v=BvR6OvNmY48&list=PLTZbNwgO5ebrkVhq8eoVMwrvFBSNHx87o&t=0s&index=6

#include <iostream>

using namespace std;

int main()
{
    int num[10] = {3,5,7,9,12,15,18,21,24,10};

    cout<<"size of int in the computer "<<sizeof(int)<<endl;

    for(int i=0;i<10;i++)
    {
        cout<<"Address "<<&num[i]<<" value "<<num[i]<<endl;
    }

    int *iPtr = &num[0];

    int *iPtr2 = num;

    cout<<"Starting address of array num "<<&num[0]<<endl;

    cout<<"Starting address of array num "<<num<<endl;

    cout<<"Address of 5th element in array num "<<&num[5]<<endl;

    cout<<"Address of 5th element in array num "<<num+5<<endl;

    int *temp = num + 5;

    cout<<"Address of 4th element of array num "<<temp-1<<endl;
    cout<<"Address of 7th element of array num "<<temp+2<<endl;
    cout<<"Address of 15th element of array num "<<temp+10<<endl;

    return 0;
}
