// https://www.geeksforgeeks.org/magic-square/

// https://www.techiedelight.com/initialize-two-dimensional-vector-cpp/

#include <bits/stdc++.h>
using namespace std;

void generateSquare(int n)
{
    //Method to initialize all fields of a 2-D array with a default value
    // First "n" is the row
    // Second "n" is the column
    vector <vector <int> > magicSquare (n, vector <int> (n,0));

    int i = n/2;
    int j = n-1;

    for(int num = 1; num <= n*n;)
    {
        if(i==-1 && j==n)
        {
            j = n-2;
            i = 0;
        }
        else
        {
            if(j==n)
            {
                j=0;
            }
            if(i<0)
            {
                i = n-1;
            }
        }

        if(magicSquare[i][j])
        {
            j -= 2;
            i++;

            //This ensures that the "num" value remains the same and
            // "i" and "j" are also not incremented for this condition
            continue;
        }
        else
        {
            magicSquare[i][j] = num++;
        }

        j++;
        i--;
    }

    cout<<"Printing Magic Square"<<endl;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<magicSquare[i][j]<<" ";
        }

        cout<<endl;
    }
}

int main()
{
    int n = 3;
    generateSquare(n);

    return 0;
}
