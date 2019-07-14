// https://www.geeksforgeeks.org/passing-vector-function-cpp/

#include <iostream>
#include <vector>

using namespace std;

//if we do not want the vector parameter to be changed
void func(const vector <int> &vect)
{
  // vect.push_back(30);


    for(int i=0;i<vect.size();i++)
    {
      cout<<vect[i]<<endl;
    }
}

int main()
{

  vector <int> vect;
  vect.push_back(10);
  vect.push_back(20);

  func(vect);

  return 0;
}
