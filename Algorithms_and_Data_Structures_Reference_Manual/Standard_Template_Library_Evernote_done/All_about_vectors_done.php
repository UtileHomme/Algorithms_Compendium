<!-- What are Vectors -->
<!-- Reference - https://www.geeksforgeeks.org/vector-in-cpp-stl/ -->

- are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted with their storage being handled automatically by the container
- vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators
- In vectors, data is inserted at the end
- Inserting at the end takes differential time as sometimes there may be a need of extending the array

- Removing the element takes only constant time because no resizing happens
- Inserting and erasing at the beginning or in the middle takes linear time

<!-- Functions associated with vectors -->

<!-- 1. Iterators -->

a. begin()
- returns an iterator pointing to the first element in the vector

b. end()
- returns an iterator pointing to the theoretical element that follows last element in the vector

c. rbegin()
- returns a reverse iterator pointing to the last element in the vector (reverse beginning)
- it moves from the last to the first element

d. rend()
- returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

<!-- Program on iterators -->

<!-- #include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> g1;
    vector <int> :: iterator i;
    vector <int> :: reverse_iterator ir;

    for(int i=1;i<=5;i++)
    {
        g1.push_back(i);
    }

    cout<<"Output of begin and end"<<endl;
    for(i=g1.begin(); i!=g1.end();i++)
    {
        cout<<*i<<endl;
    }

    cout<<endl;

    cout<<"Output of rbegin and rend"<<endl;

    for(ir=g1.rbegin(); ir!=g1.rend();ir++)
    {
        cout<<endl<<*ir;
    }

    return 0;
} -->

<!-- 2. Capacity -->

a. size()
- returns the number of elements in the vector

b. max_size()
- returns the maximum number of elements that the vector can hold

c. capacity()
- returns the size of the storage space currently allocated to the vector expressed as number of elements

d. resize(size_type of g)
- resizes the container so that it contains "g" elements

e. empty()
- returns whether the container is empty

Eg-

<!-- #include <iostream>
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
} -->


<!-- 3. Accessing the elements -->

a. reference operator [g]
- returns a reference to the element at position "g" in the vector

b. at(g)
- returns a reference to the element at position "g" in the vector

c. front()
- returns a reference to the first element in the vector

d. back()
- returns a reference to the last element in the vector

Eg-

<!-- #include <iostream>
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
} -->

<!-- How to declare a vector -->

<!-- declares an empty integer array of size 0 -->
vector <int> V;

<!-- //declares an integer array of size 100 with all elements initialized to 1 -->
vector <int> V(100,1);

<!-- Vectors erase and clear function -->
<!-- Reference - https://www.geeksforgeeks.org/vectorclear-vectorerase-c-stl/ -->

1. clear()
- is used to remove all the elements of the vector container, thus making its size 0

<!-- Syntax -->
- vectorname.clear()

- All the elements of the vector are removed

<!-- Eg- -->

Input  : myvector= {1, 2, 3, 4, 5};
         myvector.clear();
Output : myvector= {}

Input  : myvector= {};
         myvector.clear();
Output : myvector= {}

2. erase()
- is used to remove elements from a container from the specified position or range

<!-- Syntax -->
- vectorname.erase(position)
- vectorname.erase(startingposition, endingposition)

Parameters
- position of the element to be removed in the form of iterator or the range specified using start and end iterator

<!-- Eg -->

Input  : myvector= {1, 2, 3, 4, 5}, iterator= 2
         myvector.erase(iterator);
Output : 1, 2, 4, 5

Input  : myvector= {1, 2, 3, 4, 5, 6, 7, 8}, iterator1= 3, iterator2= 6
         myvector.erase(iterator1,iterator2);
Output : 1, 2, 3, 8

<!-- push_back and pop_back function -->
<!-- Reference - https://www.geeksforgeeks.org/vectorpush_back-vectorpop_back-c-stl/ -->

1. push_back()
- is used to push elements into a vector from the back
- the new value is inserted into the vector at the end, after the current last element and the container size is increased by 1

<!-- Syntax -->
vectorname.push_back(value);

Parameters
- the value to be added in the back is passed as the parameter

Result
- adds the value mentioned as the parameter to the back of the vector named as vectorname

<!-- Eg -->

Input : myvector = {1, 2, 3, 4, 5};
        myvector.push_back(6);
Output :1, 2, 3, 4, 5, 6

Input : myvector = {5, 4, 3, 2, 1};
        myvector.push_back(0);
Output :5, 4, 3, 2, 1, 0

2. pop_back()
- is used to pop or remove elements from a vector from the back.
- The value is removed from the vector from the end and the container size is decreased by 1

<!-- Syntax -->
vectorname.pop_back()

<!-- Eg -->

Input : myvector = {1, 2, 3, 4, 5};
        myvector.pop_back();
Output :1, 2, 3, 4

Input : myvector = {5, 4, 3, 2, 1};
        myvector.pop_back();
Output :5, 4, 3, 2

<!-- empty and size function -->
<!-- Reference- https://www.geeksforgeeks.org/vectorempty-vectorsize-c-stl/ -->

1. empty()
- is used to check if the vector container is empty or not

<!-- Syntax -->
vectorname.empty()

<!-- Returns -->
- true if the vector is empty
- false otherwise

<!-- Eg -->

Input  : myvector = 1, 2, 3, 4, 5
         myvector.empty();
Output : False

Input  : myvector = {}
         myvector.empty();
Output : True

2. size()
- is used to return the size of the vector container or the number of elements in the vector container

<!-- Syntax -->
vectorname.size()

<!-- Returns -->
- number of elements in the container

<!-- Eg -->
Input  : myvector = 1, 2, 3, 4, 5
         myvector.size();
Output : 5

Input  : myvector = {}
         myvector.size();
Output : 0

<!-- front and back functions -->
<!-- Reference - https://www.geeksforgeeks.org/vectorfront-vectorback-c-stl/ -->

1. front()
- can be used to fetch the first element of a container

<!-- Syntax -->

vectorname.front()

<!-- Returns -->

Direct reference to the first element of the vector container

<!-- Eg -->

Input  :  myvector = 1, 2, 3
          myvector.front();
Output :  1

Input  :  myvector = 3, 4, 1, 7, 3
          myvector.front();
Output :  3

2. back()
- can be used to fetch the last element of the vector container

<!-- Eg -->
Input  :  myvector = 1, 2, 3
          myvector.back();
Output :  3

Input  :  myvector = 3, 4, 1, 7, 2
          myvector.back();
Output :  2

<!-- Difference between front(), back() and begin(),end() function -->

<!-- Reference https://www.geeksforgeeks.org/vectorfront-vectorback-c-stl/ -->

- begin() and end() fucntion return an iterator(like a pointer) initialized to the first or last element of the container that can be used to iterate through the collection, while front() and back() function just return the reference to the first or the last element of the container 
