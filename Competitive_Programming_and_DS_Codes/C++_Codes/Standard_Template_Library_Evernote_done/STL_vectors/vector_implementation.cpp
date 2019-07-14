// https://www.youtube.com/watch?v=KokbJuMEgxw&index=2&t=0s&list=PLTZbNwgO5ebrHu5xDlEdv_aZQVn7x2V-I

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> myVec;


    if(myVec.empty())
    {
        cout<<"My vector is empty"<<endl;
    }

    for(int i=1;i<=5;i++)
    {
        myVec.push_back(i);
    }

    cout<<"Size of the vector is "<<myVec.size()<<endl;

    for(int i=6;i<=10;i++)
    {
        myVec.push_back(i);
    }

    if(!myVec.empty())
    {
        cout<<"My vector is NOT empty"<<endl;
    }

    cout<<"My vector contains"<<endl;

    vector <int>::iterator it;
    for(it=myVec.begin(); it!=myVec.end();it++)
    {
        cout<<*it<<endl;
    }

    for(int i=0;i<10;i++)
    {
        cout<<"vector at position "<<i<<" is "<<myVec.at(i)<<endl;
    }

    //erase sixth element
    myVec.erase(myVec.begin()+5);

    //three contiguous elements
    myVec.erase(myVec.begin(), myVec.begin()+3);

    for(it=myVec.begin(); it!=myVec.end();it++)
    {
        cout<<*it<<endl;
    }

    //clear all elements
    myVec.clear();

    return 0;
}
