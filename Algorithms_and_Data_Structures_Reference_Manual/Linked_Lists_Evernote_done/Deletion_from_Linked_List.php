<!-- Deletion when the "key" data element is given -->

- Inside the "deleteNode" function pass the value of "head" and the "key" that we wish to delete
- make a new "temp" variabe and pass the value of "head" to it
- make a "prev" variable to keep track of the node previous to the one where the data is found

Condition 1: When the key is the "head" itself

- Check if the "data element" of head itself is equal to the "key" AND whether "temp" is equal to NULL or not using the while loop
- In such a case , change the value of the "head" to the address of the next node
- free the memory from "temp" variable so that the previous head can be removed
- return from the loop

Condition 2: When the key is somewhere in between

- Run a "while" loop checking till the point where "temp!=NULL" and the key hasn't been found
    - During this process, keep on updating the value of "prev" with the current temp
    - Update the value of "temp" with the address of the next node

- As soon as the data is found, we have the "prev" pointing to the previous node
- We need to ensure that the address part of "prev" has the address of the alternate node
- Pass the value of "temp->next" into "prev->next"
- free the "temp" variable

<!--  Define the function like this -->

void deleteNode(Node **head, int key)
{
    //some code
}

<!-- Call the function like this -->

deleteNode(&head, 8);

<!-- Deletion when the position (according to array index format) at which the element is to be deleted is given -->

- - Inside the "deleteNode" function pass the value of "head" and the "position" of the key that we wish to delete

Condition 1: When a head will NULL value is Passed (No linked list exists)

-- check if the "head" element is NULL or not
-- if found "NULL", return

Condition 2: When the position says that "head" is to be deleted,i.e., position is 0

-- assign the value of head to a "temp" variable
-- change "head" to "temp->next" which will make "head" equal to NULL;
-- free the memory from "temp"
-- finally return

Condition 3: When an appropriate position is given

-- Here, the idea is to find the Node "previous" to the one to be deleted
-- Traverse from position "0" to the penultimate "pos" of the actual position given
-- also ensure that "temp" is not equal to NULL
-- Till here, do temp = temp->next

-- after this loop ends, we will have the "address" of the previous node

Condition 4: It is possible the position of the node given is much more than the actual nodes present in the linked list

-- In such a case , temp and temp->next will be equal to null
    -- if such is the case, simply return

-- If barring Condition 4:, everything has been fine, we have the "address" of the previous node
-- Store the value of the address of the "alternate" node inside a "next" variable of Node type
-- Free the memory from the actual node to be deleted (temp->next)
-- Into temp->next, pass the value of the "next" variable

<!-- Define the function like this -->

void deleteNodeAtPos(Node **head, int pos)
{
}

<!-- Call the function like this -->

deleteNodeAtPos(&head,3);
