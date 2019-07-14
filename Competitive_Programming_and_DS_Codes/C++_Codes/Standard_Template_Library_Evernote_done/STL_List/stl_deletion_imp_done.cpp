// Reference - https://www.youtube.com/watch?v=O249HAuBNIQ&index=1&t=0s&list=PLTZbNwgO5ebrHu5xDlEdv_aZQVn7x2V-I

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list <int> mylist;
    list <int>::iterator it1, it2;

     for(int i=1;i<10;i++)
     {
         mylist.push_back(10*i);
     }

     it1 = it2 = mylist.begin();

     //takes the iterator 2 to the index 6
     advance(it2,6);

     ++it1;

     //erase the number at second index
     //point to the next element, the next element will come to the second index
     it1 = mylist.erase(it1);

     it2 = mylist.erase(it2);

     ++it1;
     --it2;

     mylist.erase(it1,it2);

     cout<<"mylist contains"<<endl;

     for(it1= mylist.begin(); it1!=mylist.end(); it1++)
     {
         cout<<*it1<<endl;
     }

     return 0;

}
