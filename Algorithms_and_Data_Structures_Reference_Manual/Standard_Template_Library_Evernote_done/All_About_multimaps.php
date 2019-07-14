<!-- Reference - https://www.geeksforgeeks.org/multimap-associative-containers-the-c-standard-template-library-stl/ -->

<!-- What is a multimap -->

- It is similar to map with an addition that multiple elements can have the same keys
- Rather than each element being unique, the key value and mapped value pair has to be unique in this case

<!-- Functions associated with Multimaps -->

1. begin()
- returns an iterator to the first element of the multimap

2. end()
- returns an iterator to the theoretical element that follows the last element in the multimap

3. size()
- returns the number of elements in the multimap

4. max_size()
- returns the maximum number of elements that the multimap can hold

5. empty()
- returns whether the multimap is empty

6. pair insert(key value, multimap value)
- add a new element to the multimap

7. erase(iterator position)
- removes the element at the position pointed by the iterator

8. erase(const g)
- removes the key value "g" from the multimap

9. clear()
- removes all the elements from the multimap

10. key_comp() / value_comp()
- returns the object that determines how the elements in the multimap are ordered ("<" by default)

11. find(const g)
- returns an iterator to the element with key value "g" in the multimap if found, else returns the iterator to end

12. count(const g)
- returns the number of matches to element with key value "g" in the multimap

13. lower_bound(const g)
- returns an iterator to the first element that is equivalent to the multimapped value with key value "g"

14. upper_bound(const g)
- returns an iterator to the first element that is equivalent to multimapped value with key value "g"

<!-- Difference between unordered_map and unordered_multimap -->

<!-- Reference - https://www.geeksforgeeks.org/unordered_multimap-and-its-application/ -->

- We cannot store duplicates in unordered_map, that is if we have a key value pair already in our unordered_map , the key is updated by the new value.
- In case of multimaps, we can store duplicate keys-value pairs

<!-- Internal Representation -->

- The internal representation of unordered_multimap is same as that of unordered_map but for duplicate keys another count value is maintained with each key-value pair.
- As the pairs are stored in hash table, there is no particular order among them but pair with same keys come together in data structure whereas pair with same values are not guaranteed to come together

<!-- Time Complexity -->

- All operator on unordered_multimap take constant amount of time but time can go to linear in worst case depending on internally used hash function but in the long run unordered_multimap outperforms multimap (tree based multimap)
