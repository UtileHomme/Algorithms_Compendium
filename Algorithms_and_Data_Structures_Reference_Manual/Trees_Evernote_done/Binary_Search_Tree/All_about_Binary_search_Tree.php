<!-- Reference - https://www.youtube.com/watch?v=pYT9F8_LFTM&t=0s&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=27 -->

<!-- How different operations look for different data structures -->

https://imgur.com/a/0NP7e73

<!-- What is a Binary Search Tree -->
- here, the value of all nodes in left subtree is lesser and value of all the nodes in right subtree are greater

https://imgur.com/a/r1TAOVF

(binary search tree)
https://imgur.com/a/KzKowLI

(not a binary search tree)
https://imgur.com/a/kdaLOM0

- Searching in BST takes O(log n) time because we know which subtree to look into by comparing the value to be searched and the present node taken into consideration
- So, our search space reduces by 2

<!-- Binary Search worst case scenario O(n) -->

(unbalanced BST)
https://imgur.com/a/60iXSKO

<!-- Binary Search Tree in Detail -->

<!-- Reference - https://www.geeksforgeeks.org/binary-search-tree-set-1-search-and-insertion/ -->

- it is a node-based binary tree data structure which has the following properties

a. The left subtree of a node contains only nodes with keys lesser than the node's key
b. The right subtree of a node contains only nodes with keys greater than the node's key
c. The left and right subtree each must also be a binary search tree. There must be no duplicate nodes

https://imgur.com/a/dzXa2H0

** The above properties of BST provide an ordering among keys so that the operations like search, minimum and maximum can be done fast.
- If there is no ordering, then we may have to compare every key to search a given key

<!-- Facts about BST -->

- Inorder Traversal of BST always produces sorted output
