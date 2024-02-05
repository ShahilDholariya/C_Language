#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50] = "Hello, Everyone ";
    char str2[50] = "Good Morning";

    // String 2 append into string 1
    printf("%s\n", strcat(str1, str2));
}