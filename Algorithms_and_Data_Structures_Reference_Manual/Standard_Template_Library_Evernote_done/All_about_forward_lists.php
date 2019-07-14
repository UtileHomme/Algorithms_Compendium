<!-- https://www.geeksforgeeks.org/forward-list-c-set-1-introduction-important-functions/ -->

<!-- What is Forward list in STL -->

- implements singly linked list
- are useful than other containers in insertion, removal and moving operations (like sort) and allows time constant insertion and removal of elements

- It differs from "list" by the fact that forward list keeps track of location of only next element while list keep tracks to both next and previous elements, thus increasing the storage space required to store each element
- The drawback of forward list is that it cannot be iterated backwards and its individual elements cannot be accessed directly

** Forward list is preferred over list when only forward traversal is required as we can save space

<!-- Eg cases -->
- chaining in hashing, adjacency list representation of graphs

<!-- Operations on Forward List -->

1. assign()
- is used to assign values to forward list
- its other variant is used to assign repeated elements

2. push_front()
- is used to insert the element at the first position on forward list
- the value from this function is copied to the space before first element in the container
- The size of forward list increases by 1

3. emplace_front()
- is same as push_front()
- but no copying operation occurs, the element is created directly at the memory before the first element of the forward list

4. pop_front()
- is used to delete the first element of the list

5. insert_after()
- gives us a choice to insert at any position in forward list
- the arguments in this function are copied at the desired position

5. emplace_after()
- does the same operation as above function but the elements are directly made without any copy operation

6. erase_after()
- is used to erase elements from a particular position in the forward list

7. remove()
- removes the particular element from the forward list mentioned in its argument

8. remove_if()
- removes according to condition in its argument

9. splice_after()
- transfers elements from one forward list to other

<!-- Reference - https://www.geeksforgeeks.org/forward-list-c-set-2-manipulating-functions/ -->

10. merge()
- is used to merge one forward list with other.
- if both the lists are sorted then the resulted list returned is also sorted

11. operator "="
- copies one forward list into other
- a deep copy is made here

12. sort()
- is used to sort the forward list

13. unique()
- deletes the multiple occurrences of a number and returns a forward list with unique elements
** the forward list should be sorted for this function to execute successfully.

14. reverse()
- is used to reverse the forward list

15. swap()
- swaps the content of one forward list with other

16. clear()
- clears the contents of forward list

17. empty()
- returns true if the list is empty otherwise false

<!-- front and empty function -->

<!-- https://www.geeksforgeeks.org/forward_listfront-forward_listempty-c-stl/ -->

1. front()
- is used to reference the first element of the forward list container

Syntax :

forwardlistname.front()

Parameters :

No value is needed to pass as the parameter.

Returns :

Direct reference to the first element of the container.

Examples:

Input  : forward_list forwardlist{1, 2, 3, 4, 5};
         forwardlist.front();

Output : 1

Input  : forward_list forwardlist{0, 1, 2, 3, 4, 5};
         forwardlist.front();

Output : 0

Eg -

#include <forward_list>
#include <iostream>
using namespace std;

int main()
{
    forward_list<int> myforwardlist{ 1, 2, 3, 4, 5 };
    cout << myforwardlist.front();
    return 0;
}

Output

1

2. empty()

- is used to check if the forward list container is empty or not

Syntax :

forwardlistname.empty()

Parameters :

No parameters are passed.

Returns :

True, if list is empty
False, Otherwise

Examples:

Input  : forward_list forwardlist{1, 2, 3, 4, 5};
         forwardlist.empty();

Output : False

Input  : forward_list forwardlist{};
         forwardlist.empty();

Output : True

Eg-

#include <forward_list>
#include <iostream>
using namespace std;

int main()
{
    forward_list<int> myforwardlist{};
    if (myforwardlist.empty()) {
        cout << "True";
    }
    else {
        cout << "False";
    }
    return 0;
}

Output

True

Application of front and empty

Q. Given a list of integers, find the sum of the all the integers.

#include <forward_list>
#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    forward_list<int> myforwardlist{ 1, 5, 6, 3, 9, 2 };
    while (!myforwardlist.empty()) {
        sum = sum + myforwardlist.front();
        myforwardlist.pop_front();
    }
    cout << sum;
    return 0;
}

Output

26
