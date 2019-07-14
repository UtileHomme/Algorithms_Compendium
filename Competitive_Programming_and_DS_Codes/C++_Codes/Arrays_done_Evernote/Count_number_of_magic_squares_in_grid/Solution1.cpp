// https://www.geeksforgeeks.org/count-magic-squares-in-a-grid/

#include <bits/stdc++.h>

using namespace std;

const int R = 3;
const int C = 4;

int checkMagicSquare(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
    // https://stackoverflow.com/questions/12333783/how-to-initialize-a-string-set-in-c
    set<int> s1{a, b, c, d, e, f, g, h, i};
    set<int> s2{1, 2, 3, 4, 5, 6, 7, 8, 9};

    if ((s1 == s2) && (a + b + c) == 15 && (d + e + f) == 15 &&
        (g + h + i) == 15 && (a + d + g) == 15 &&
        (b + e + h) == 15 && (c + f + i) == 15 &&
        (a + e + i) == 15 && (c + e + g) == 15)
    {
        return true;
    }

    return false;
}

int countMagicSquare(vector<vector<int>> B)
{
    int cnt = 0;

    int row = B.size();
    int col = B[0].size();

    for (int i = 0; i < row - 2; i++)
    {
        for (int j = 0; j < col - 2; j++)
        {
            if (B[i + 1][j + 1] != 5)
            {
                continue;
            }

            if (checkMagicSquare(B[i][j], B[i][j + 1], B[i][j + 2], B[i + 1][j], B[i + 1][j + 1], B[i + 1][j + 2], B[i + 2][j], B[i + 2][j + 1], B[i + 2][j + 2]))
            {
                cnt++;
            }
        }
    }

    return cnt;
}

int main()
{
    vector<vector<int>> A{{4, 3, 8, 4}, {9, 5, 1, 9}, {2, 7, 6, 2}};

    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A[i].size(); j++)
        {
            cout << A[i][j] << " ";
        }

        cout << endl;
    }
}
