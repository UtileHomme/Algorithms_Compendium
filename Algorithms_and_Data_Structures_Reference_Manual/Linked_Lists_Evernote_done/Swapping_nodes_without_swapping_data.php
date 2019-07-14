<!-- Process -->

<!-- Define the structure like this -->

struct Node
{
    int data;
    Node *next;
};

<!-- Different Cases -->

1. The elements do not exists at all in the linked list
 - in such a case simply return from the function

 2. One of the elements is the HEAD

 3. Both the elements are same
 - in such a case simply return from the function

4. Elements exists at different positions
    - maintain the previous and current node for both the elements

<!-- Process Explained -->

- After checking for "Case 3" we initialize "prev" as NULL and "curr" of both elements as Head

- We check whether they exists or not and initalize "prev" and "curr" of "each element" with appropriate values

- if the previous of "element 1" is "NOT NULL", then to swap nodes, it's "address part" has to have the address of the current node of "element 2"
- if it is NULL, then the head will now be equal to the "address" of "element 2"

- Test similarly for previous of "element 2"

- After all of this is done, we now have to swap the "address" parts of both the current element nodes

- Store the address part of any current element in a "temp" variable
- them swap by the usual way
