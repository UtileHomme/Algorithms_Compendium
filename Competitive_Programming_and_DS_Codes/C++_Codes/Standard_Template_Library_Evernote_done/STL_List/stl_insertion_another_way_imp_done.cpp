// Reference - https://www.youtube.com/watch?v=O249HAuBNIQ&index=1&t=0s&list=PLTZbNwgO5ebrHu5xDlEdv_aZQVn7x2V-I

#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    list <int> mylist;
    list <int>::iterator it;

    for(int i=1;i<5;i++)
    {
        mylist.push_back(i);
    }

    it = mylist.begin();
    ++it;

    mylist.insert(it,10);

    //insert "20" twice
    mylist.insert(it,2,20);

    --it;

    //size "2" and has the values "30" twice
    vector <int> myvector(2,30);
    mylist.insert(it, myvector.begin(), myvector.end());

    cout<<"mylist contains"<<endl;
    for(it=mylist.begin(); it!=mylist.end();it++)
    {
        cout<<*it<<endl;
    }

    return 0;
}
