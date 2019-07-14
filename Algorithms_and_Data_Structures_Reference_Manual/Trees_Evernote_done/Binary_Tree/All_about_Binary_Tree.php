<!-- What is a Binary Tree -->
<!-- Reference - https://www.geeksforgeeks.org/binary-tree-set-1-introduction/ -->

- a tree whose elements have at most 2 children (not more than 2 children)
- Since each element in a binary tree can have only 2 children, we name them left and right child

<!-- Binary Tree Representation -->

- A tree is represented by a pointer to the topmost node in the tree
- if the tree is empty, the value of root is NULL

A tree node contains the following parts
1. data
2. pointer to the left child
3. pointer to the right child

<!-- Properties of Binary Trees -->
<!-- Reference - https://www.geeksforgeeks.org/binary-tree-set-2-properties/ -->

1. The maximum number of nodes at level "l" of a binary tree is 2^(l-1)

- level is the number of nodes on path from root to the node (including root and the node)
- Level of root is 1

2. Maximum number of nodes in a binary tree of height "h" is 2^(h) - 1

** A tree can have maximum nodes if all levels have maximum nodes
- maximum nodes in a binary tree of height "h" = 1 + 2 +  4 + .... + 2^(h - 1) = G.P. of "h" numbers = 2^(h) - 1

https://imgur.com/a/HqUiT6B

3. In a Binary tree with "n" nodes, minimum possible height or minimum number of levels is [ log(n+1) (base 2) ]
https://imgur.com/a/aetmROV

4. A binary tree with "l" leaves has at least [Log l(Base 2) + 1] levels

5. In a Binary tree, number of leaf nodes is always one more than the nodes with two children

L = T+1
where L=number of leaf nodes
           T = number of internal nodes with 2 children

<!-- Types of Binary Trees -->
<!-- Reference - https://www.geeksforgeeks.org/binary-tree-set-3-types-of-binary-tree/ -->
<!-- Reference - https://stackoverflow.com/questions/12359660/difference-between-complete-binary-tree-strict-binary-tree-full-binary-tre -->

1. Full(strict) Binary Tree
- A binary tree is full if every node has 0 or 2 children
- it can also be a tree in which all nodes except leaves have 2 children

https://imgur.com/a/MoqgP

- In a Full Binary Tree, number of leaf nodes is number of internal nodes + 1

** internal nodes are those nodes which have a child

2. Complete Binary Tree
- a binary tree is complete if all levels are completely filled except the last level and the last level has all keys as left as possible

https://imgur.com/a/YEjGe
https://imgur.com/a/hU5TC9y

3. Perfect Binary Tree
- a binary tree is perfect if all its internal nodes have two children and all leaves are at the same level

https://imgur.com/a/c5Nkf

** A perfect binary tree of height "h" (where height is the number of nodes on the path from root to leaf) has 2^(h) - 1 nodes

4. Degenerate or Pathological tree
- a tree where every internal node has one child
- such trees are performance-wise same as linked list

https://imgur.com/a/IWyId

Time complexity - https://imgur.com/a/3zpbYym

** Time Complexity of trees can be generally calculated using the height of the tree formed

5. Balanced binary tree
- in this tree, the difference between height of left and right subtree for every node is not more than k (mostly 1)

diff = | height of left subtree - height of right subtree |

https://imgur.com/a/XqCxXaN

Eg - (balanced binary tree)
https://imgur.com/a/oMR9diE

Eg - (non balanced binary tree)
https://imgur.com/a/wWQy81n

** We try to minimize height as much as possible because cost of operations depends on height

<!-- How to implement a binary tree in code -->

struct Node
{
  int data;
  Node *left;
  Node *right;
}

1. Dynamically created nodes

2. Arrays

- In case of complete binary tree, we can use arrays to store the node data

- The left child at index "i" of the array will be = 2i+1
- The right child at index "i" of the array will be = 2i+2

https://imgur.com/a/2bwvudG
