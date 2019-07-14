<!-- Why is OOPs important -->
<!-- Reference - https://www.geeksforgeeks.org/basic-concepts-of-object-oriented-programming-using-c/ -->

- the aim is to bind together data and the functions that operate on this data so that no other part of the code
can access that data except that function

<!-- Basic Concepts of OOPs  -->

1. Objects
    - are basic run time entities
    - instances of a class
    - are USER DEFINED DATATYPES

Eg -

class person
{
    char name[20];
    int id;

    public:
    void getdetails()
    {

    }
};

int main()
{
    person p1;
}


** Objects take up space in the memory and have an associated address
- When a program is executed the objects interact by sending messages to one another.
- Each object contains data and code to manipulate the data.
- Objects can interact without having the knowledge of other object's data or code
    - It is sufficient to know the type of message accepted and type of response returned by the objects

2. Class
    - is a blueprint of data and functions or methods.
    - Class doesn't take any space

Eg -

class class_name
{
    private:

    public:

    protected:
}

** Class is a user defined datatype like structures and unions
** By default class variables are "PRIVATE"

3. Encapsulation

- Warpping up of data and functions into a single unit
- data is not accessible to the outside world and only those function which are wrapping in the class can access it
- this is called data hiding

4. Data abstraction

- providing only the needed information to the outside world and hiding the implementation details

5. Inheritance

- objects of one class acquiring the properties of objects of another class
- provides re usability
- we can add additional features to an existing class without modifying it

6. Polymorphism

- ability to take more than one form
- the behaviour of an operation depends upon the types of data used in the operation

- supports operator overloading and function overloading
