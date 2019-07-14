<!-- What is the use of templates -->

<!-- Reference - https://www.youtube.com/watch?v=Vc1RyqWFbiA&list=PL5jc9xFGsL8G3y3ywuFSvOuNm3GjBwdkb -->

1. Function Templates
<!-- Imagine a program like below -->

<!-- int square(int x)
{
return x*x;
}

double square(double x)
{
return x*x;
}

int main()
{
cout<<square(5)<<endl;
cout<<square(5.5)<<endl;
} -->

- The problem with above program is that if we wish to calculate the square for long INT now, we have to declare another function
- NOTE: that only the data input type is changing, the calculation remains the same

- A better way is to declare a template which gives us more freedom with the type of input

<!-- Code -->

<!-- template <typename T>

T square(T x)
{
return x*x;
}

int main()
{
cout<<square(5)<<endl;
cout<<square(5.5)<<endl;
} -->

<!-- What is code bloat -->
- Even though we have a single square function, both called functions are stored separately in the memory
- This causes the code to bloat

2. Class Templates

<!-- template <typename T>

class Bovector
{
T a[1000];
int size;

public:
Bovector():size(0)
{

}

void push(T x)
{
a[size] = x;
size++;
}

void print()
{
for(int i=0;i<size;i++)
{
cout<<a[i]<<endl;
}
}
};

int main()
{
Bovector<int> bv;

bv.push(2);
bv.push(5);
bv.push(8);
bv.push(9);
bv.print();
} -->

<!-- Difference between function and class template -->

- The function template can decipher the data type of the input data implicitly
- For the class template we have to explicitly mention the data type
