// https://www.geeksforgeeks.org/vectorclear-vectorerase-c-stl/

#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector <int> vect{1,2,3,4,5};

  vector <int>::iterator it;

  it = vect.begin();

  vect.erase(it);

  for(auto it=vect.begin(); it!=vect.end();it++)
  {
    cout<<" "<<*it;
  }

  return 0;
}
