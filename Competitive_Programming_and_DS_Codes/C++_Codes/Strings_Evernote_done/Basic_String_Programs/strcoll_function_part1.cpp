// https://www.geeksforgeeks.org/strcoll-in-cc/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10];
    char str2[10];
    int ret;

    strcpy(str1, "geeksforgeeks");
    strcpy(str2, "GEEKSFORGEEKS");

    ret = strcoll(str1, str2);

    if (ret > 0) {
        printf("str1 is less than str2");
    } else if (ret < 0) {
        printf("str1 is greater than str2");
    } else {
        printf("str1 is equal to str2");
    }

    return (0);
}
