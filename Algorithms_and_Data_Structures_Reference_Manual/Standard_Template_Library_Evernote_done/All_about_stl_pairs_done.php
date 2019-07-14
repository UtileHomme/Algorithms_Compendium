<!-- What are pairs in STL -->
<!-- Reference - https://www.geeksforgeeks.org/pair-in-cpp-stl/ -->

- it is a simple container defined in <utility> header consisting of two data elements or objects

- the first element is referenced as "first" and the second element as "second"
- the order is fixed (first, second)

- it is used to combine together two values which may be different in type
- provides a way to store heterogeneous objects as a single unit

- can be assigned, copied and compared
- the array of objects allocated in a map or hash_map are of type "pair" by default in which all the "first" elements
are unique keys associated with their "second" value objects

- to access the elements, we use variable names followed by dot operator followed by the keyword first or second

<!-- How to initialize a pair -->

pair(data_type1, datatype2) Pair_name(value1, value2)

Eg -

<!-- default -->
pair g1;

<!-- initialized, different data type -->
pair g2(1, 'a');

<!-- initialized, same data type -->
pair g3(1,10);

<!-- copy of g3 -->
pair g4(g3);

<!-- Another way -->
g2 = make_pair(1,'a');

<!-- Operators with pairs -->

1. using equal(=)
- assigns a new object for a pair object

<!-- Syntax -->
pair &operator = (const pair&pr);

- this assigns "pr" as the new content for the pair object
- the first value is assigned the first value of "pr" and the second value is assigned the second value of "pr"

2. comparison (==) operator with pair
- for given two pairs say "pair1" and "pair2", the comparison operator compares the first value and second value of
those two pairs, i.e., if "pair1.first" is equal to "pair2.first" AND if "pair1.second" is equal to "pair2.second"

3. not equal (!=) operator with pair
- For given two pairs say pair1 and pair2, the != operator compares the first values of those two pairs
i.e. if pair1.first is equal to pair2.first or not, if they are equal then it checks the second values of both.

4. Logical( >=, <= )operators with pair
 For given two pairs say pair1 and pair2, the =, >, can be used with pairs as well.

<!-- swap function -->
- swaps the contents of one pair object with the contents of another pair object

<!-- Syntax -->
pair1.swap(pair2);
