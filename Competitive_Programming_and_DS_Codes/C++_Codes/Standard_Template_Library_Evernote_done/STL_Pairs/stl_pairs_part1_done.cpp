// https://www.geeksforgeeks.org/pair-in-cpp-stl/

#include <iostream>
#include <utility>

using namespace std;

int main()
{
    pair <string, double> PAIR2("GeeksForGeeks", 1.23);

    cout<<PAIR2.first<<" ";
    cout<<PAIR2.second<<endl;

    return 0;
}
