<!-- What is STL -->
<!-- Reference - https://www.geeksforgeeks.org/the-c-standard-template-library-stl/ -->

- It is a set of C++ template classes to provide common programming data structures and functions such as
lists, stacks, arrays etc.
- it is a library of container classes, algos. and iterators.
- it is a generalized library so, its components are parametrized

STL has four components
- Algorithms
- Containers
- Functions
- Iterators

<!-- Algorithms -->
- the header algorithm defines a collection of functions especially designed to be used on a range of elements
- they act on containers and provide means for various operations for the contents of the containers

a. Algorithm
- sorting
- searching
- important STL algos
- useful array algos
- partition operations

b. Numeric
- valarray class

<!-- Containers -->

- containers or container classes store objects and data
- they are in total seven standard "first-class" container classes and three container adaptor classes and only seven
header files that provide access to these containers or container adaptors

1. Sequence Containers
- implement data structures which can be accessed in a sequential manner

Eg -
- vector
- list
- deque
- arrays
- forward_list

2. Container Adaptors
- provide a different interface for sequential containers

Eg -
- queue
- priority_queue
- stack

3. Associative Containers
- implement sorted data structures that can be quickly searched (O logn complexity)

Eg -
- set
- multiset
- map
- multimap

<!-- Functions -->
- includes classes that overload the function call operator.
- Instances of such classes are called function objects or functors
- allow the working of the associated function to be customized with the help of parameters to be passed

- Functors

<!-- Iterators -->
- are used for working upon a sequence of values
- allow generality in STL

- Iterators

<!-- Utility Library -->

- Defined under <utility header>

- pair  
