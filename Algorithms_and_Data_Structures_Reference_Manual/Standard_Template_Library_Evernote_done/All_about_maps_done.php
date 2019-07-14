<!-- What is STL maps -->
<!-- Reference - https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/ -->

- it is like a hash table
- a key value pair

- they are associative containers that store elements in a mapped fashion
- each element has a key value and a mapped value
* No two mapped values can have the same key values

<!-- Functions associated with Maps -->

1. begin()
- returns an iterator to the first element of the map

2. end()
- returns an iterator to the theoretical element that follows the last element in the map

3. size()
- returns the number of elements in the map

4. max_size()
- returns the maximum number of elements that the map can hold

5. empty()
- returns whether the map is empty

6. pair insert(key value, map value)
- add a new element to the map

7. erase(iterator position)
- removes the element at the position pointed by the iterator

8. erase(const g)
- removes the key value "g" from the map

9. clear()
- removes all the elements from the map

10. key_comp() / value_comp()
- returns the object that determines how the elements in the map are ordered ("<" by default)

11. find(const g)
- returns an iterator to the element with key value "g" in the map if found, else returns the iterator to end

12. count(const g)
- returns the number of matches to element with key value "g" in the map

13. lower_bound(const g)
- returns an iterator to the first element that is equivalent to the mapped value with key value "g"

14. upper_bound(const g)
- returns an iterator to the first element that is equivalent to mapped value with key value "g"

<!-- Maps vs unordered map -->
<!-- Reference - https://www.geeksforgeeks.org/?p=164838 -->

1. Ordering
- for maps, it is ascending order (by default)
- for unordered maps, there is no ordering

2. Implementation
- for maps, in self balancing BST (like Red Black Tree)
- for unordered maps, in hash table

3. Search time
- for maps, log(n)
- for unordered maps, O(1) - average, O(n) - worst case

4. Insertion time
- for maps, log(n) + rebalance
- for unordered maps, O(1) - average, O(n) - worst case

5. Deletion time
- for maps, log(n) + rebalance
- for unordered maps, O(1) - average, O(n) - worst case

** use "maps" when we need ordered data

** use "unordered_map" when we need to keep count of some data (eg - strings) and no ordering is required
- when we need a single element access (no traversal)

<!-- Unordered maps in STL and its applications -->

<!-- Reference - https://www.geeksforgeeks.org/unordered_map-in-stl-and-its-applications/ -->

- it is an associated container that stores elements formed by the combination of key value and mapped values
- The key value is used to uniquely identify the element and mapped value is the content associated with that key
- Both the key and value can be of any type (predefined or user defined)

- Internally unordered_map is implemented using Hash Table, the key provided to map are hashed indices of hash table that is why performance of data structure depends on hash function a lot but on an average the cost of look-up from hash table is O(1)

- In worst case, unordered_map may require O(n) time but practically it is much faster and outperforms tree based maps

<!-- Difference between unordered_map and unordered_set -->

- In unordered_set, we have only key, no value, these are mainly used to see presence/absence in a set.

<!-- Difference between unordered_map vs map -->

- Map (like set) is an ordered sequence of unique keys whereas in unordered_map key can be stored in any order, so unordered.

- Map is implemented as balanced tree structure that is why it is possible to maintain an order between the elements (by specific tree traversals)

- Time complexity of map operations is O(log n) while for unordered_set, it is O(1) on average

<!-- How are maps implemented internally -->

<!-- Reference - https://stackoverflow.com/questions/1237361/how-sets-multisets-maps-and-multimaps-work-internally -->

- There are implemented as nodes of a tree
- A node is an object that stores one element

- in the case of "[multi]map", each node stores one key and its associated value
- A node also stores multiple pointers to other nodes

** Unlike a list, the nodes in sets and maps form a tree
- One would typically arrange it such that branches on the "left" of a certain node have values less than that node, while branches on the "right" of a certain node have values higher than that node

- Operations like finding a map key/set values are fast
- Start at the root node of the tree. If that matches, we're done.
- If the root is larger, search in the left branch.
- If the root is smaller than the value we're looking for, follow the pointer to the right branch.
- Repeat until you find a value or an empty branch

- Inserting an element is done by creating a node, finding the location where it should be placed and then inserting a node there by adjusting the pointers around it
- Finally, there is a "rebalancing" operation to prevent the tree from ending up all out of balance
- Ideally, each right and left branch is about the same size
