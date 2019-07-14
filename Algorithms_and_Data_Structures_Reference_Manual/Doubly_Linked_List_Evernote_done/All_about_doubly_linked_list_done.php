<!-- What is a doubly linked list -->
<!-- Reference - https://www.youtube.com/watch?v=JdQeNxWCguQ&t=0s&index=12&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P -->
<!-- Reference - https://www.geeksforgeeks.org/doubly-linked-list/ -->

- here, each node has two links
- link to the next node
- link to the previous node

<!-- Representation -->
https://imgur.com/a/QlBgR

https://imgur.com/a/kbxw9

<!-- Representation in code -->

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

<!-- Advantages of creating a doubly linked list over singly linked list -->

1. A DLL can be traversed in both forward and backward direction
2. The delete operation in DLL is more efficient if the pointer to the node to be deleted is given
- In singly linked list, to delete a node, pointer to the previous node is needed
- To get this previous node, sometimes the list is traversed
- in DLL, we can get the previous node using the previous pointer

<!-- Disadvantages of creating a doubly linked list over singly linked list -->

1. Every node of DLL requires extra space for a previous pointer
