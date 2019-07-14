<!-- What are Trees -->
<!-- Reference - https://www.geeksforgeeks.org/binary-tree-set-1-introduction/ -->
<!-- Reference - https://www.youtube.com/watch?v=qH6yxkw0u78&t=0s&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=25 -->

- Unlike Arrays, Linked Lists, Stack and Queues, which are linear data structures, trees are hierarchical data structures
- it is a collection of entities called nodes linked together to simulate a hierarchy
- it is a recursive data structure

<!-- Tree Vocabulary -->

- the topmost node is called the root of the tree
- The elements that are directly under an element are called its children
- The element directly above something is called its parent

<!-- Pictorial representation -->
https://imgur.com/a/p4oTw

Eg - "a" is the child of "f" and "f" is the parent of "a"

- Elements with no children are called "leaves"
- internal nodes are those nodes which have a child
- siblings have same parent
- if we can go from "j" to "a", then "j" is an ancestor of "a" and "a" is a descendant of "j"

<!-- Why and when to use Trees -->

1. When we want to store information that naturally forms a hierarchy

Eg - a file system on the computer

https://imgur.com/a/vPgoO

2. Trees (with some ordering e.g. BST) provide moderate access/search (quicker) than Linked List and slower than arrays

3. Trees provide moderate insertion/deletion (quicker than arrays and slower than unordered Linked lists)

4. Like linked lists and unlike arrays, Trees don't have an upper limit on the number of nodes as nodes are linked to pointers

<!-- Main applications of trees include  -->

1. Manipulate hierarchical data
2. Make information easy to search(see tree traversal)
3. Manipulate sorted lists of data
4. Router algos
5. For quick search, insertion, deletion

<!-- Properties of Trees -->

- In a tree of "n" nodes, there will be "n-1" edges

- Depth of a node "x" = length of path from root "x"
                                    = no. of edges in path from root to "x"

<!-- Eg -->
https://imgur.com/a/arHSm2S (assume depth is to be calculated from root)

- Height of a node "x" = No. of edges in the longest path from "x" to a leaf
** height of leaf = 0

<!-- Eg -->
https://imgur.com/a/VnxCzha

- Height of a tree = Height of root node
