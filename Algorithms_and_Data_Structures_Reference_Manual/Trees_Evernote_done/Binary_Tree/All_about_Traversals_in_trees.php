<!-- Reference - https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/ -->

Example tree

https://imgur.com/a/SaOWO

There are two types of Traversals

1. Depth First Traversal
- Inorder (Left, Root, Right)  4,2,5,1,3

- Preorder (Root, Left, Right) 1,2,4,5,3

- Postorder (Left, Right, Root) 4,5,2,3,1

2. Breadth First or Level Order Traversal 1,2,3,4,5
- this involves traversing the tree nodes in a level by level fashion

<!-- How inorder traversal works -->

https://imgur.com/a/GlYV5

<!-- How postorder traversal works -->

https://imgur.com/a/FCmfB

<!-- How preorder traversal works -->

https://imgur.com/a/3Y2I5

<!-- Time Complexity -->

T(n)= T(k) + T(n-k-1) + c
- here, "k" is the number of nodes on one side and "n-k-1" is the number of nodes on the other side of the root node

Case 1: Skewed tree
- here, there are no subtrees on one of the sides
- therefore, "k" = 0

T(n) = T(0) + T(n-1) + c
T(n) = 2T(0) + T(n-2) + 2c
T(n) = 3T(0) + T(n-3) + 3c

T(n) = (n-1)T(0) + T(1) + (n-1)c

T(n) = (n)T(0) + nc

Let T(0) = some constant

Therefore O(n)

Case 2: Both left and right substrees have equal number of nodes

T(n) = 2T(n/2) + c

<!-- Auxilliary space -->

- if we don't consider the stack of function calls, then O(1)
- if we do , then O(n)
