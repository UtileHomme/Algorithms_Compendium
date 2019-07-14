// Reference - https://www.youtube.com/watch?v=O249HAuBNIQ&index=1&t=0s&list=PLTZbNwgO5ebrHu5xDlEdv_aZQVn7x2V-I

#include <list>
#include <iostream>

using namespace std;

int main()
{
    list <int> L;

    //pushes items in the end
    L.push_back(0);

    //pushes the items in the beginning
    L.push_front(10);

    //starting pointer,
    L.insert(++L.begin(),2);

    L.push_back(5);
    L.push_back(6);

    list <int>::iterator i;

    for(i=L.begin(); i!=L.end();i++)
    {
        cout<<*i<<endl;
    }

    return 0;

}
