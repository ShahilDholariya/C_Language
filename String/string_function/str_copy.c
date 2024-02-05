#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50] = "Hello, This is DNK";
    char str2[50];

    //Copy str1 into str2
    strcpy(str2, str1);
    printf("%s\n", str2);
}