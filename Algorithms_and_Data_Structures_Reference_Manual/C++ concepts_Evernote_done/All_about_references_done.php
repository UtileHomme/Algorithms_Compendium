<!-- What are references -->
<!-- Reference - https://www.geeksforgeeks.org/references-in-c/ -->

- an alternate name for an existing variable
- can be declared using a "&" sign

Eg - int x = 10;
        int &ref = x;

- Both ref and x have same values
- If we change the value of "x" , the value of "ref" will also change

<!-- Differences between references and pointers -->

- A pointer can be declared a "Void" but reference cannot be

Eg - int a = 10;
        void *aa = &a;  //valid
        void &a = a;   //not valid

- Once a reference is created, it cannot be made to reference another object at a later stage
- This can be done with pointers

- References cannot be Null
- Pointers  are made Null to indicate that they are not pointing to any valid thing

- A reference MUST be initialized when declared. There is no such restriction with pointers

- References are safer to use since they MUST Be initialized
- The concept of WILD POINTERS is unlikely to exist

- References don't need "&" to access them. It is only used at the time of declaration
