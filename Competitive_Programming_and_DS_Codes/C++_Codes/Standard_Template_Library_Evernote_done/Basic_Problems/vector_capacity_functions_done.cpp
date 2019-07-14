#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> g1;

    for(int i=1;i<=5;i++)
    {
        g1.push_back(i);
    }

    cout<<"Size: "<<g1.size()<<endl;
    cout<<"Capacity: "<<g1.capacity()<<endl;
    cout<<"Max size: "<<g1.max_size();

    return 0;
}
