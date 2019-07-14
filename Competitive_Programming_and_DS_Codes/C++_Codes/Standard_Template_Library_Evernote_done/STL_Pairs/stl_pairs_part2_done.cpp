// https://www.geeksforgeeks.org/pair-in-cpp-stl/

#include <iostream>
#include <utility>

using namespace std;

int main()
{
    pair <int, double> PAIR1;
    pair <string, double> PAIR2;

    //this is initialized to 0 by default
    cout<<PAIR2.first<<" ";

    //this is initialized to 0 by default
    cout<<PAIR2.second<<endl;

    cout << " ";

//it prints nothing i.e NULL
   cout << PAIR2.first ;

   //it prints nothing i.e NULL
   cout << PAIR2.second ;

   return 0;
    return 0;
}
