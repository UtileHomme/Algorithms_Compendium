<!-- What is the problem with arrays -->
<!-- Reference - https://www.youtube.com/watch?v=lC-yYCOnN8Q&index=4&t=0s&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P -->

- Arrays are stored as contiguous blocks of memory
- so, it's difficult to store any new element if the memory is not available
- also, memory will get wasted if all the allocated memory is not used

- size of arrays is fixed. We must know the upper limit in advance.
- inserting or deleting a new element is expensive, because room has to be made for that element by making shifts

<!-- How do Linked Lists work -->

- they store the data along with the address of the next data
- pointers are used
- it need not be contiguous.

<!-- Why they are preferred over Arrays -->

- size is dynamic
- ease of insertion/deletion

<!-- Problems with Linked Lists -->

- Random access is not allowed. We have to access sequentially from first node to the expected node
- Extra memory space is required for pointer for each element

<!-- Array vs Linked list -->

<!-- Reference - https://stackoverflow.com/questions/7496251/what-is-the-advantage-of-linked-list-over-an-array-and-vice-versa?noredirect=1&lq=1 -->
<!-- Reference - https://stackoverflow.com/questions/166884/array-versus-linked-list -->

- Sequential access on arrays is also faster than on linked lists on many machines due to locality of reference
and data caches
- Linked Lists receive almost no benefit from the cache

- Another disadvantage of linked lists is the extra storage needed for references, which often makes them impractical for lists of small data
such as characters or boolean values
- It can also be slow and with a naive allocator, wasteful to allocate memory separately for each new element

- An array stores elements in successive order in memory.
https://imgur.com/a/qWoAN

- a linked list stores items in the following way: It creates an own "list item" for each element
- this "list item" holds the actual element and a pointer/reference/hint etc. to the next "list item"

- If it is a doubly linked list, it also contains a pointer/reference/hint etc. to the previous list item
https://imgur.com/a/3Sa8I

** the elements can be spread all over the memory and are not stored at specific memory locations

<!-- Comparison of some operations for Linked list and Arrays -->

1. Accessing an element at a specific index
- using an array, we simply compute the offset for the index and have the element at the index
- this is cheap

- With a list, we do not know "a priori" where the element at index is stored (Since all elements can be anywhere in memory), so we have to walk
the list item by item until we find the element at the index
- this is an expensive operation

2. Adding a new element at the end of the sequence
- using an array can lead to the following problem: Arrays are usually of fixed size, so if we have the situation that our array is completely filled,
we can't put the new element there
- we have to copy the whole array

- using a list, we have to generate a new "list item", put the element into it and set the next pointer of the currently last element to this new item
- we store the reference to the currently last element so that we don't have to search through the whole list to find it

3. Adding a new element somewhere in the middle

Assume the following situation:
https://imgur.com/a/EsDrV

- we wish to insert "4.5" between 4 and 5
- we have to move all elements from "5" to "1000" one position right in order to make space for the "4.5"

https://imgur.com/a/UFxYL

- Moving all these elements, is a very expensive operation.

- In case of a list, we generate a new list item and update the pointers/references

https://imgur.com/a/RAlpb

<!-- Moral of the story -->
- Linked lists are really nice when it comes to inserting at random positions (as long as you have a pointer to the adequate list item)
- If the operation involves adding a lot of elements dynamically and traversing all elements, a list might be a good choice

- An array is good when it comes to index accesses.
- If you application needs to access elements at specific positions very often, we should use an array

<!-- Representation -->

- by a pointer to the first node in the linked list called the HEAD
- if the linked list is empty, value of HEAD is null

- Each node consists of 2 parts
  - data
  - pointer to next node

  <!-- How to define a structure -->

  struct Node
  {
    int data;
    Node *next;
  };

  <!-- This is how we allocate memory to a new node -->

  Node *head = new Node;

<!-- How to print a elements in a linked list -->

void printList(Node *temp)
{
  //while the variable "temp" has an address in it
  while(temp!=NULL)
  {
    //print the data at that address
    cout<<temp->data<<" ";

    //move to the next address
    temp = temp->next;
  }
}

<!-- How to add newnode to the front -->

//adding a new node in the front of the linked list
void Fpush(Node **head, int newdata)
{
  Node *newnode = new Node;

  //add the data to this new node
  newnode->data = newdata;

  //assign the address of HEAD into the pointer of newnode
  newnode->next = *head;

  //make the head point to the address of newnode
  *head = newnode;
}

<!-- How to add a newnode after a particular node -->

void InsertNode(Node *prev, int newdata)
{
  //if we do not have any node till now , return
  if(prev==NULL)
  {
    cout<<"previous Node cannot be null";
    return;
  }

  Node *newnode = new Node;

  newnode->data = newdata;

  //whatever was the pointer address in the previous node, put it in the newnode pointer since it will point there now
  newnode->next = prev->next;

  //whatever is the address in the pointer of previous node, replace it with the address of the newnode
  prev->next = newnode;
}

<!-- Analogy of Singly Linked Lists -->

- Conga - line where all people are holding their hand with that of the person in front of them

<!-- Analogy of Doubly Linked Lists -->

- Every person is holding the hand of the person in front of them and the person behind them

<!-- How and where the code, variables and information is stored in the application memory -->

- One section is used to store the instructions which are used for running the program
- One section is used to store the global variables
- Stack section is used to store the function call executions and local variables

** All the above have a fixed memory size something that is decided at compile time

- Heap is not fixed and one can request memory during run time

** Global variable "head" goes to the Global section
