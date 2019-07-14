//Reference -  https://www.youtube.com/watch?v=mfbYLWjLtDU&index=5&t=0s&list=PLTZbNwgO5ebrHu5xDlEdv_aZQVn7x2V-I

#include <string>
#include <iostream>
#include <map>
#include <utility>

using namespace std;

int main()
{
    map <string,int> Employees;

    Employees["Neha"] = 5234;
    Employees["Varun"] = 3374;

    Employees.insert(pair<string,int>("vikram",1923));

    Employees.insert(map<string,int>::value_type("Jhonny",7582));

    Employees.insert(make_pair(string("Peter"),5238));

    //print the size of the map
    cout<<"Map Size: "<<Employees.size()<<endl;

    for(map<string,int>::iterator ii=Employees.begin(); ii!=Employees.end(); ++ii)
    {
        //print the key and the corresponding value
        cout<<(*ii).first<<": "<<(*ii).second<<endl;
    }

    map<string,int>::iterator it;

    it= Employees.find("Varun");

    cout<<it->second;

    return 0;
}
