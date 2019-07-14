#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> g1;

    for(int i=1;i<=10;i++)
    {
        g1.push_back(i);
    }

    cout<<"Reference for second element: "<<g1[2]<<endl;

    cout<<"Element at position 4: "<<g1.at(4)<<endl;

    cout<<"Element at first position: "<<g1.front()<<endl;

    cout<<"Element at last position: "<<g1.back()<<endl;

    return 0;
}
