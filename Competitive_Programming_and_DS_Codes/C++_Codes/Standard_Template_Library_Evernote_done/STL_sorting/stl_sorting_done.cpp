// https://www.geeksforgeeks.org/sort-algorithms-the-c-standard-template-library-stl/

#include <iostream>
#include <algorithm>

using namespace std;

void show(int a[])
{
    for(int i = 0 ;i<10;i++)
    {
        cout<<"\t"<<a[i];
    }
}

int main()
{
    int a[10] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};

    cout<<endl<<"The array before sorting is : ";
    show(a);

    // sort(startaddress, endaddress)
    sort(a,a+10);
    cout<<endl<<"The array after sorting is : ";
    show(a);

    return 0;
}
