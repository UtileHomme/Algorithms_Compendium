// https://www.geeksforgeeks.org/check-string-can-obtained-rotating-another-string-2-places/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isRotated(string str1, string str2)
{
    if(str1.length()!=str2.length())
    {
        return false;
    }

    string rotateClock = "";
    string rotateAntiClock = "";

    int len = str2.length();

    //for anti-clockwise , concatenate last two characters and all characters from beginning to just before last two characters
    rotateAntiClock = rotateAntiClock + str2.substr(len-2,2) + str2.substr(0, len-2);

    rotateClock = rotateClock + str2.substr(2) + str2.substr(0,2);

    return (str1.compare(rotateClock) == 0 || str1.compare(rotateAntiClock)==0);

}

int main()
{
    string str1 = "geeks";
    string str2 = "eksge";

    bool k = isRotated(str1, str2);

    if(k)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}