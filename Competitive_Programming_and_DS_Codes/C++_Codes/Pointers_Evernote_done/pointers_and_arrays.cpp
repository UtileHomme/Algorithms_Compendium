// Reference https://www.youtube.com/watch?v=ASVB8KAFypk&index=6&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&t=0s

#include <iostream>

using namespace std;

int main()
{
    int A[] = {2,4,5,8,1};

    //address of A
    cout<<A<<endl;
    cout<<&A[0]<<endl;

    //value of A
    cout<<A[0]<<endl;
    cout<<*A<<endl;

    return 0;
}
