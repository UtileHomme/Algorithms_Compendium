// https://www.geeksforgeeks.org/multimap-associative-containers-the-c-standard-template-library-stl/

#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main()
{
  //creating a new multimap

  multimap <int,int> g1;

  g1.insert(pair <int,int> {1,40});
  g1.insert(pair <int,int> {2,30});
  g1.insert(pair <int,int> {3,60});
  g1.insert(pair <int,int> {4,20});
  g1.insert(pair <int,int> {5,50});
  g1.insert(pair <int,int> {6,50});
  g1.insert(pair <int,int> {7,10});

  multimap <int, int>::iterator itr;

  //printing the first multipmap
  for(itr=g1.begin(); itr!=g1.end();itr++)
  {
    cout  <<  '\t' << itr->first
    <<  '\t' << itr->second << '\n';
  }

  cout<<endl;

  //assigning the first multimap values to a new multimap

  multimap <int,int> g2(g1.begin(),g1.end());

  for (itr = g2.begin(); itr != g2.end(); ++itr)
  {
    cout << '\t' << itr->first
    << '\t' << itr->second << '\n';
  }
  cout << endl;

  //erasing all elements less that key 3
  cout << "\ng2 after removal of elements less than key=3 : \n";
  cout << "\tKEY\tELEMENT\n";
  g2.erase(g2.begin(), g2.find(3));
  for (itr = g2.begin(); itr != g2.end(); ++itr)
  {
    cout << '\t' << itr->first<< '\t' << itr->second << '\n';
  }

    //remove all elements with the key 4
    int num = g2.erase(4);
    cout << "\ng2.erase(4) : ";
    cout << num << " removed \n" ;
    cout << "\tKEY\tELEMENT\n";
    for (itr = g2.begin(); itr != g2.end(); ++itr)
    {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }

    cout << endl;

    //lower bound and upper bound for multimap g1 key = 5
    cout << "g1.lower_bound(5) : " << "\tKEY = ";
    cout << g1.lower_bound(5)->first << '\t';
    cout << "\tELEMENT = " << g1.lower_bound(5)->second << endl;
    cout << "g1.upper_bound(5) : " << "\tKEY = ";
    cout << g1.upper_bound(5)->first << '\t';
    cout << "\tELEMENT = " << g1.upper_bound(5)->second << endl;

}
