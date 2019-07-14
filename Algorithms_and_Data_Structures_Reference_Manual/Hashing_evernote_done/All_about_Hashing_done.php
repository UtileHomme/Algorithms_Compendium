<!-- What is Hashing -->

<!-- Reference - https://www.youtube.com/watch?v=Ke_tII6Y0GE&list=PLTZbNwgO5ebqw1v0ODk8cPLW9dQ99Te8f -->

- A hash table is a data structure (key value lookup)

- it provides O(1) time on average for insert, search and delete function

- the basic concept is the "Hash function"

- A hash function maps a big number or string to a small integer that can be used as index
in hash table
- it decides to which cell the "key" is hashed or mapped

Eg -
h(x) = x mod 10
x = user input

Let's take sum numbers = 21, 56, 72, 39, 48, 986, 13

H(21) = 21 mod 10 = 1
H(56) = 56 mod 10 = 6
H(72) = 2
H(39) = 9
H(48) = 8

So while storing we can visualize it as:
Hash table (position of the user input) = user input
HT [ Hash(x) ] = x
where Hash(x) = index where the user input is stored

** For "96", we again get "6" again as the index
- this is what is called collision

** Collision can occur if we have the count of elements more than the number of cells (true for all cases)
- it can also occur if the number of elements are less than the number of cells

<!-- How the hash table looks like for above -->
https://imgur.com/a/MvSrE


** A good h(x) must have the following properties
- efficiently computable
- should uniformly distribute the keys

<!-- Another Representation of Hash table -->

https://imgur.com/a/f0kxC

- We are trying to create an associative array
- Assume that the key is "names" and the value is "phone numbers"

- A hash function is constructed in such a manner that when the key is applied to the function, an index is generated
which is the index inside the array where the value needs to be placed
- It is possible that the same index might have multiple values. This is called "collision"
- In such a case, a link/chain is created (refer above)

<!-- Example of a good hash function -->

<!-- Reference - https://www.youtube.com/watch?v=4ZJQ6ehmAsg&list=PLTZbNwgO5ebqw1v0ODk8cPLW9dQ99Te8f&index=2 -->

Let the numbers be 10,100, 200, 10000, 500

H(x) = x mod 7
 - this one is good because it will give different array indices when the numbers are divided

 - Let's assume we have a string and we wish to hash it
- we have a table size of "10007"
- we use the ASCII  value of each character

1. Hash(key) = ( Run the array from 0 to end. pick each element "key[i]" and sum them) mod 10007

- key[i] is ASCII character 8 bit integer value from "0-127"

- Now assume that all the characters have an ASCII value of "127" and the string length is "8"
- the Max Hash key will be = 8*127 = 1016

- This means that whatever be the range of the string, the hash key indices will always lie between "0" and "1016"
https://imgur.com/a/MCdnl

- the rest of the table is not occupied
- 90% table is empty
- the data is not uniformly distributed

2. Hash(key) = (key[0] + 27 key[1] + 729*key[2]) % Hash size = index

Max(Hash(key)) = 127 + 27*127 + 729*127
                            = 95250 which is more than 10007

But in english language only "2851" combinations are there
- this is only 28% out of 10007

3. Hash(key) = (sum of key[keysize-1]* 32^i)

Eg - "i  n  d  i  a"

Hash(key) =  key[4] * 32^0 + key[3]*32^1 + key[2]*32^2 + key[1]*32^3 + key[0]*32^4

<!-- Hashing explained in a different way -->

<!-- Reference - https://www.youtube.com/watch?v=yXmNmckX4sI -->

- Assume that there are 2^l strings initially (let l = 3. therefore 8 strings)
- We have 2^s places (let s=2, therefore 4 places) in which these strings can be placed

each box will share 2^(l-s) strings

https://imgur.com/a/Vc1FP

<!-- Some Hashing algo scenarios -->

<!-- Reference - https://www.youtube.com/watch?v=KyUTuwz_b7Q -->

- For numberic keys, divide the key by the number of available addresses, n, and take the remainder

                                                            address = key Mod n

- For alphanumeric keys, divide the sum of ASCII codes in a key by the number of available addresses , n , and take the remainder

- Folding method divides key into equal parts then adds the parts together

Eg - The telephone number 014528345654 becomes 01 + 45 + 28 + 34 + 56 + 54 = 218
- Depending on the size of the table, may then divide by some constant and take the remainder

- if a collision occurs, we can practise "Open Addressing"
- Open addressing allows us to store data at another position if the designated position is already occupied
- a method "Linear Probing" is done. If the alloted slot is filled, we perform a linear search to look for the next available slot

Load factor = (Total number of items stored)/(size of the array)

- We also practise "Closed addressing"
- The indices act as a pointer to the next node in the linked list
- we can have multiple data present at the same index

<!-- Where is hashing used -->
- it is widely used in database indexing, compilers, caching, password authentication etc.
Eg -
We have a bulk of reference data and we don't want to query it from time to time in a database, we can cache the result and
put it into a hash table instead for faster access

<!-- Time Complexity of Hash functions -->
O(1) - for a "good" hashtable
O(n) - for a "terrible" hashtable

<!-- Basics of Hash Tables -->
<!-- Reference - https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/tutorial/ (not completely done)-->

- Hashing is a technique that is used to uniquely identify a specific object from a group of similar objects

Eg -
1. In universities, each student is assigned a unique roll number that can be used to retrieve information about them
2. In libraries, each book is assigned a unique number that can be used to determine information about the book, such as
its exact position in the library or the users it has been issued to etc.

- Assume that we have an object and we wish to assign a key to it to make searching easy
- To store the key/value pair, we can use a simple array where the keys can be used directly as an index to store values
- In cases, where the keys are large and cannot be used directly as an index, we should use hashing

- In hashing, large keys are converted into small keys by using hash functions
- the values are then stored in a data structure called hash table
- the idea is to distribute entries (key/value pairs) uniformly across an array
- each elements is assigned a key(converted key)

- By using that key we can access the element in O(1) time
- Using the key, the algorithm(hash function) computes an index that suggests where an entry can be found or inserted

Hashing is implemented in two steps
1. An element is converted into an integer using a hash function.
- This element can be used as an index to store the original element, which falls into the hash table

2. The element is stored in the hash table where it can be quickly retrieved using hashed key

hash = hashfunc(key)
index = hash%array_size

- the hash is independent of the array size and it is then reduced to an index (a number between 0 and array_size -1) by using the
modulo operator (%)

<!-- Hash function -->
- it is any function that can be used to map a data set of an arbitrary size of a data set of a fixed size, which falls into the hash table
- the values returned by a hash function are called hash values, hash codes, hash sums

- To achieve a good hashing mechanism, it is important to have a good hash function

1. Easy to compute
- It should be easy to compute and must not become an algorithm in itself

2. Uniform distribution
- It should provide a uniform distribution across the hash table and should not result in clustering

3. Less collisions
- Collisions occur when pairs of elements are mapped to the same hash value

Eg -
Assume that we have to store strings in the hash table
{"abcdef", "bcdefa", "cdefab", "defabc"}

Let the hash function be defined as below -
"The index for a specific string will be equal to the sum of the ASCII values of the characters modulo 599"

- As 599 is a prime number, it will reduce the possibility of indexing different strings
- It is recommended that we use prime numbers in case of modulo.
- The ASCII values of a,b,c,d,e and f are 97,98,99,100,101 and 102
- The sum for all characters in whatever arrangement will always be the same

- The strings will be stored in the hash table in the following format:

 https://imgur.com/a/5LABt

- it will take O(n) time in the worst case to access a specific string
- not a good hash function

Let the hash function be defined as below:
"The index for a specific string will be equal to the sum of ASCII values of characters multiplied by the respective order in the string after which it is
modulo with 2069 (prime number)"


String              Hash function                                                                                         Index
abcdef              (97*1 + 98*2 + 99 * 3 + 100*4 + 101*5 + 102*6)%2069                                                     38
bcdefa                                                                                                                      23
cdefab                                                                                                                      14
defabc                                                                                                                      11

- the hash table look likes
https://imgur.com/a/cOKiP

<!-- Hash table -->
- it is a data structure that is used to store keys/value pairs
- it uses a hash function to compute an index into an array in which an element will be inserted or searched
- The avg time required to search an element in a hash table is O(1)

Eg -
Consider a string S. We are required to count the frequency of all characters in this string

<!-- Method 1 -->

<!-- #include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string s = "ababcd";
    int len = s.length();

    for(char k='a' ; k<='z';k++)
    {
        int freq=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]==k)
            {
                freq++;
            }
        }

        if(freq==0)
        {
             continue;
        }
        else
        {
            cout<<"Frequency of "<<k<<" is "<<freq<<endl;
        }
    }
} -->


<!-- Method 2 -->
<!--
#include <iostream>
#include <string.h>

using namespace std;

int stringHash(char c)
{
    return (c-'a');
}

int main()
{
    string s = "ababcd";
    int len = s.length();

    int Freq[26];

    for(int i=0;i<26;i++)
    {
        Freq[i]=0;
    }

    for(int i=0;i<len;i++)
    {
        int index = stringHash(s[i]);
       Freq[index]++;
    }


    for(int i=0;i<26;i++)
    {
        if(Freq[i]>0)
        {
            cout<<"Frequency of "<<char(i+'a')<<" is "<<Freq[i]<<endl;
        }
        else
        {
            continue;
        }
    }

    return 0;
} -->

https://imgur.com/a/txHCi

<!-- Collision resolution techniques -->

1. Separate chaining (Open hashing)
- it is one of the most commonly used resolution techniques
- implemented using linked lists
- here, each element of the hash table is a linked list
- To store an element in the hash table you must insert it into a specific linked list
- If there is any collision (i.e. two different elements have same hash value) then store both the elements in the same linked list

https://imgur.com/a/a5oRF

- the cost of lookup is that of scanning the entries of the selected linked list for the required key
- if the distribution of the keys is sufficiently uniform, then the average cost of a lookup depends only on the average number of keys per linked list
- For this reason, chained hash tables remain effective even when the number of table entries (N) is much higher than the number of slots

- For separate chaining, the worst-case scenario is when all the entries are inserted into the same linked list
- the lookup procedure might have to scan all its entries, so the worst-case cost is proportional to the number(N) of entries in the table

<!-- Why hashing is better than other methods -->
<!-- Reference - https://www.geeksforgeeks.org/hashing-set-1-introduction/ -->
<!-- Reference - https://www.youtube.com/watch?v=wWgIAphfn2U -->

- Suppose we wish to design a system for storing employee records keyed using phone numbers
- we wish the following queries to be performed efficiently

1. Insert a phone number and corresponding information
2. Search a phone number and fetch the information
3. Delete a phone number and related information

We can use the following methods for storage:
a. Array of phone numbers and records
b. Linked list of phone numbers and records
c. Balanced binary search tree with phone numbers as keys
d. Direct access table

a. and b.
- For arrays and linked lists, we need to search in a linear fashion, which can be costly in practice
- If we use arrays and keep the data sorted, then the phone number can be searched in O(log n) time using binary search
but insert and delete operations become costly as we have to maintain the sorted order

c.
- here, we get moderate search, insert and delete times
- all these operations can be guaranteed to be in O(log n) time

d.
- in case of direct access table, we make a big array and use phone numbers as indices in the array
- an entry in array is NIL if phone number is not present else the array entry stores pointer to records corresponding to phone number
- we can do all operations in O(1) time

- This solutions has practical limitations
- extra space required is huge
Eg - if phone number is n digits , we need O(m * 10^n) space for table where "m" is size of a pointer to record
- Another problem is an integer in a programming language may not store "n" digits

- Hashing is a solution that can be used in almost all such solutions and performs extremely well compared to above data structures like Array, Linked List, Balanced BST.

** With hashing we get O(1) search time on average (under reasonable assumptions) and O(n) in worst case

- Hashing is an improvement over Direct Access Table.
- The idea is to use hash function that converts a given phone number or any other key to a small number and uses the small number as index in a table called hash table.

<!-- Hash function -->

- A function that converts a given big phone number to a small practical integer value
- The mapped integer value is used as an index in hash table,
- A hash function maps a big number or string to a small integer that can be used as index in hash table

** A good hash function should have the following properties
1. Efficiently computable
2. Should uniformly distribute the keys (each table position is equally likely for each key)

Eg - a phone number's bad hash function is to take first three digits
-  a better function is consider last 3 digits

<!-- Hash Table -->

- An array that stores pointers to records corresponding to a given phone number
- An entry in hash table is NIL if no existing phone number has hash function value equal to the index for the entry.

<!-- Collision Handling -->

- Since a hash function gets us a small number for a big key, there is a possibility that two key result in the same value.
- The situation where a newly inserted key maps to an already occupied slot in hash table is called collision and must be handled using some collision handling techniques

1. Chaining
- The idea is to make each cell of hash table point to a linked list of records that have same hash function value
- Chaining is simple, but requires additional memory outside the table

2, Open Addressing
- In Open Addressing, all elements are stored in the hash table itself.
- Each table entry contains either a record or NIL.
- When searching for an element, we one by one examine table slots until the desired element is found or it is clear that the element is not in the table

<!-- What is the Load factor -->

- Given a hash table "T" with "m" slots holding "n" elements, the load factor is defined as

LF = (n/m)

** Always start with a small hashtable to avoid space wastage
- if at some point it is realized that the number of elements have increased, modify the hash table accordingly

<!-- Reference - https://www.youtube.com/watch?v=KW0UvOW0XIo&index=5&list=PL5E96052C98F478A1&t=0s -->

** A hash function is can be thought of as being in 2 parts

a. HASH CODE MAP
- it maps the key to an integer
- if the keys are not integers, we need to convert it into an integer

b. COMPRESSION MAP
- the hash code map will have to have a fixed range
- if "n" is the hash table then we need to bring this integer to the range of "0" to "n-1"
- we need to convert the hash code map result so that it fits in the hash table range

** One important requirement of a hash function that it should map the particular key to the same index location always

<!-- How to create a Hash function for a string -->

One strategy would be to take the ASCII value of each letter, add them up and interpret it as an integer
- but this is not a good strategy

Eg -
Imagine we have strings "dog" and "god"
- the ASCII sum of both strings will be same and the hash function will send them to the same index

- Another strategy is called "Polynomial Accumulation"
- We view the strings in the below form

https://imgur.com/a/wdRod

- Here, "a0" is the ASCII value for the first character, "a1" is the ASCII value for the second character and so on and so forth
- We will evaluate the above polynomial at a particular value of "x" and that integral result obtained will be the hash code map

<!-- Methods to choose compression maps -->

a. Use the remainder

h(k) = k mod m
where "k" is the key
"m" is the size of the table

** Do not choose the "m" to be a power of 2 or close to a power of 2
- Let "m" be some prime number

*** If we convert an integer into binary, "mod 2" of that will give us the last bit of the integer
- "mod 4" of that will give us the last 2 bits of the integer
- "mod 8" of that will give us the last 3 bits of the integer

b. use (at video length 15.00)

h(k) = round up of (m (k A mod 1))
where "k" is the key
"m" is the size of the table
"A" is a constant where 0 < A < 1

Steps involved:
- map the key from 0 to k(max) TO 0 to k(max) * A
- Take the fractional part of this product
- Multiply the "fractional part" with "m"
- Now round it up and we'll get the index in the table

- Here choice of "m" is not critical
- "m" can be a power of 2 here

c. Multiply, Add and Divide (MAD) (at video length 18.00)

h(k) = (ak + b) mod N
- where "a" and "b" are some fixed numbers
- N is the size of the table

"a" should not be multiple of "N"
- because (ak)mod N will be 0 and for any key we will get the index as "b"

<!-- How do random generators work -->
- the first time "ak+b" mod N is computed (the starting value of "k" is the seed)
- next time the value of "k" is taken as the last random number generated and a fresh value is computed
- the same process is followed always
- all the generated numbers are known as pseudo random numbers because once we know the "seed" , we can always figure out the numbers being generated

<!-- What are universal hash functions --> (at video length 21:00)

- It is possible that we have a set of hash functions (say 15)
- depending on the keys, we pick up a particular hash function . The same hash function will be used for insertion, search and delete
- but the next time the keys are to mapped, a different hash function wil be taken

<!-- Other methods for Collision resolutions -->

a. Open Addressing (at video length 25:00)
- Here the number of elements need to be less than the number of slots available in the hash table
- Each index of the table will either contain an element or will be NULL

a.1 Insertion
- If the current location has been used, move to the next location

This is the pseudocode for linear probing (insertion)
https://imgur.com/a/rUfdI

- first the hash function is run for that key
- the result is stored as "probe"
- if that location is filled, look for the next location
- if we read the end of the list , do (probe + 1) mod m
- if an empty slot is found, place the key there

<!-- Advantage -->
- uses less memory than chaining as we do not have to store addresses for the links

<!-- Disadvantage -->
- might be a little slower than chaining
- The elements tend to aggregate or form clusters
https://imgur.com/a/TPykf (at video length 33:00)

a.2 Searching
** For searching we go to "k mod 13" and continue to look at the successive locations
- if we reach an empty location, that means the element is not there

https://imgur.com/a/VdRqS

a.3 Deletion
** For deletion, we first search for the element
- remove the element, and place a marker say "x" signifying that at some point of time this location was occupied
- else we will have an empty location

https://imgur.com/a/iK3eD

** if the search operation finds "x" it will continue searching
** if the insert operation finds "x" it will insert the element at that location

- if too many "markers" are there, just rehash (remove all the elements and calculate the indices freshly)

b. Double Hashing (at video length 42:00)
- here, we use two hash functions

h1(k) will determine the index
h2(k) will determine the offset or the distance by which we need to advance to check for the next empty index

https://imgur.com/a/1XSPL

- If "m" is prime, we will examine every position in the table
- we do not wan't a situation where we keep on advancing through the table and keep on getting the same indices (basically a cycle)
- we will get a cycle, when the offset divides the size of the table
- to avoid this we use the "prime" numbers as size of the table

<!-- Advantages -->
- distributes keys more uniformly than linear probing (because offset - no clusters)

<!-- What is Hash Table -->
<!-- Reference - https://leetcode.com/explore/learn/card/hash-table/ (not completely done)-->

- it is a data structure which organizes data using hash function in order to support quick insertion and search
- there are 2 types of hash tables

a. hash set
- it is one of the implementations of the "set" data structure to store "no repeated values"

b. hash map
- it is one of the implementations of a "map" data structure to store "(key, value)" pairs

<!-- What is the principle of hash tables -->
<!-- Reference - https://leetcode.com/explore/learn/card/hash-table/182/practical-applications/1109/ -->

- the key idea is to use a hash function to map keys to buckets

1. When we insert a new key, the hash function will decide which bucket the key should be assigned and the key will be stored in the corresponding bucket
2. When we wish to search for a key, the hash table will use the "same" hash function to find the corresponding bucket and search only in the specific bucket

https://imgur.com/a/ISDbc

<!-- Keys to design a hash table -->

1. Hash function
- it is the most important component of a hash table which is used to map the key to a specific bucket

Eg -
y = x % 5
- where "x" is the key value and "y" is the index of the assigned bucket

<!-- How hashing looks in java -->

<!-- Reference - https://www.geeksforgeeks.org/internal-working-of-hashmap-java/ -->

<!-- Reference http://javaconceptoftheday.com/how-hashmap-works-internally-in-java/ -->

<!-- Best Reference - https://www.youtube.com/watch?v=c3RVW3KGIIE -->

<!-- What is separate chaining -->
<!-- Reference - https://www.geeksforgeeks.org/?p=142806 -->

<!-- Insertion example -->
https://imgur.com/a/O4U4xBX

- The idea is to make each cell of hash table point to a linked list of records that have the same hash function value

- Let the hash function be "key mod 7" and sequence of keys as 50, 700, 76, 85, 92, 73, 101

1. 50 = 1
2. 700 = 0
3. 76 = 6
4. 85 = 1
5. 92 = 1
6. 73 = 3
7. 101 = 3

https://imgur.com/a/i8t9Kn8

<!-- Hashing with chaining program explanation -->
<!-- Reference - https://www.geeksforgeeks.org/c-program-hashing-chaining/ -->

- Let's create a hash function, such that our hash table has 'N' number of buckets
- To insert a node into the hash table, we need to find the hash index for the given key.

hashindex = key%noOfBuckets

a. Insert
- Move to the bucket corresponding to the above calculated hash index and insert the new node at the end of the list

b. Delete
- Calculate the hash index for the key, move to the bucket corresponding to the calculated hash index, search the list in the current bucket to find and remove the node with the given key (if found)

<!-- Hashing with Open Addressing -->
<!-- Reference - https://www.geeksforgeeks.org/hashing-set-3-open-addressing/ -->

- Here, all elements are stored in the hash table itself
** At any point, the size of the table must be greater than or equal to total number of keys

<!-- Functions involved in Open Addressing -->

a. Insert(k)
- Keep probing until an empty slot is found
- Once an empty slot is found, insert k

b. Search(k)
- Keep probing until slot's key doesn't become equal to "k" or an empty slot is reached

c. Delete(k)
- Delete operation is interesting
- If we simply delete a key, then search may fail
- So slots of deleted keys are marked specially as "deleted"

** Insert can insert an item in a deleted slot but search doesn't stop at a deleted slot

** Open Addressing is done in the following way

a. Linear Probing
- we linearly probe for the next slot
- Typical gap between two probes is 1

Let hash(x) be the slot index computed using hash function and "S" be the table size

<!-- What happens in Linear Probing -->
https://imgur.com/a/arfZo1E

<!-- Eg- -->

Let us consider a hash function "key mod 7" and the sequence of keys as 50, 700, 76, 85, 92, 73, 101

https://imgur.com/a/gpcPmTE

<!-- What is the CLUSTERING problem faced in Linear Probing -->
- The main problem with linear probing is clustering, many consecutive elements form groups and it starts taking time to find a free slot or to search an element

b. Quadratic Probing
- We look for (i^2) slot in the i'th iteration

https://imgur.com/a/fGzrtyK

c. Double Hashing
- We use another function hash2(x) and look for i*hash2(x) slot in the i'th rotation

https://imgur.com/a/m63d7Lh

<!-- Reference - https://www.cse.cuhk.edu.hk/irwin.king/_media/teaching/csc2100b/tu6.pdf  (study this in detail)-->

<!-- Comparison of the above 3 methods -->

- Linear probing has the best cache performance, but suffers from clustering.
- One more advantage of Linear probing is easy to compute

- Quadratic probing lies between two in terms of cache performance and clustering

- Double hashing has poor cache performance but no clustering.
- Double hashing requires more computation time as two hash functions need to be computed

https://imgur.com/a/YCXiOjS

<!-- Performance of Open Addressing -->

- Like Chaining, performance of hashing can be evaluated under the assumption that each key is equally likely to be hashed to any slot of table (simple uniform hashing)

m = number of slots in the hash table
n = number of keys to be inserted in the hash table

<!-- Load factor alpha = n/m (<1) -->

Expected time to search/ insert/delete < 1 / (1-alpha)

<!-- Reference - https://www.youtube.com/watch?v=Dk57JonwKNk

http://courses.csail.mit.edu/6.006/fall11/lectures/lecture10.pdf
-->
