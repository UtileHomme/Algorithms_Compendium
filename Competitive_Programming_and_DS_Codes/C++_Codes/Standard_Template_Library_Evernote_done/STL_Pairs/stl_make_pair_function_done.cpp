// https://www.geeksforgeeks.org/pair-in-cpp-stl/

#include <iostream>
#include <utility>

using namespace std;

int main()
{
    pair <string, double> PAIR3;

    PAIR3 = make_pair("GeeksForGeeks", 4.56);

    cout << PAIR3.first << " " ;
    cout << PAIR3.second << endl ;

    return 0;
}
