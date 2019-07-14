<!-- https://www.geeksforgeeks.org/set-in-cpp-stl/ -->

<!-- What are Sets in STL -->

- a type of associative containers in which each element has to be unique, because the value of the element identifies it
- The value of the element can not be modified once it is added to the set, though it is possible to remove and add the
modified value of that element

<!-- Functions associated with sets -->

a. begin()
- returns an iterator to the first element in the set

b. end()
- returns an iterator to the theoretical element that follows last element in the set

c. size()
- returns the number of elements in the set

d. max_size()
- returns the maximum number of elements that the set can hold

e. empty()
- returns whether the set is empty or not

f. pair <iterator, bool> insert(const g)
- adds a new element 'g' to the set

g. iterator insert<iterator position, const g)
- adds a new element 'g' at the position pointed by iterator

h. erase(iterator position)
- removes the element at the position pointed by the iterator

i. erase(const g)
- removes the element 'g' from the set

j. clear()
- removes all the elements from the set

k. key_comp() / value_comp()
- returns the object that determines how the elements in the set are ordered('<' by default)

l. find(const g)
- returns an iterator to the element 'g' in the set if found, else returns the iterator to the end

m. count(const g)
- return 1 or 0 based on the element 'g' is present in the set or not

n. lower_bound(const g)
- returns an iterator to the first element that is equivalent to 'g' or definitely will not go before the
element 'g' in the set

o. upper_bound(const g)
- returns an iterator to the first element that is equivalent to 'g' or
definitely will go after the element in 'g' in the set
