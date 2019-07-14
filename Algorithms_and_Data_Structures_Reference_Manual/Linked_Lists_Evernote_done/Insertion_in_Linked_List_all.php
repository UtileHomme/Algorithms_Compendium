<!-- Insertion at the front -->

<!-- Process -->

<!-- Define a structure like this -->

struct Node {
  int data;
  Node *next;
};

- We initialize head with the value = NULL

- Inside the function where we are creating the Node, we pass this head (with NULL value)
along with the newdata that we wish to enter

- We create the newnode

- we assign the newdata to the newnode data field

- We pass the head address to the newnode pointer field

- we make the head hold the address of the newnode

<!-- Remember to pass the values of head like this inside "int main()" -->
Fpush(&head,5);

<!-- Also, define the function like this -->

void Fpush(Node **head, int newdata)
{
  //
}

Time-Complexity is O(1) as it takes constant amount of time

<!-- Insertion after a given node -->

<!-- Process -->

- We need to ensure that there exists a head and at least one node with some value and a Null pointer address in it

- In case, there is only Head with a "NULL" value in it, check for the value of the pointer address and return if "NULL" is found

- The node after which we are trying to add the new data is referred to as "prev"

- into the newnode pointer pass the address value of the prev node pointer

- into the prevnode pointer pass the newnode

<!-- It should be passed as a pointer in the function like this -->

void InsertNode(Node *prev, int newdata)
{
  //
}

<!-- Remember to pass the values of head like this inside "int main()" -->
InsertNode(head, 5);      //or head->next

Time-Complexity is O(1) as it takes constant amount of time

<!-- Insertion at the end of the list -->

<!-- Process -->

- We need to pass the HEAD as a reference to the function

- Make a newnode and in its pointer address, pass "NULL" since it will be the last node

- if the HEAD that is passed has the value "NULL", then assign this reference the address value of newnode and return

- Pass the reference HEAD into another variable "last". This will track the address of the element which has the address pointer "NULL"

- Run it till "last->next"=="NULL", and find the "last" address value

- into the "last" pointer pass the address of the newnode

<!-- It should be passed as a pointer in the function like this -->
void Insertend(Node **ref, int newdata)
{
//
}

<!-- Remember to pass the values of head like this inside "int main()" -->
Insertend(&head,8);

Time-Complexity is O(n) as it traverses the linkedlist till the end
- can be made O(1) by keeping an extra pointer to tail of the linked list
