#include <stdio.h>
#include <string.h>
int main()
{
    // if str1>str2 than o/p become positive value
    // if str1=str2 than o/p become zero
    // if str1<str2 than o/p become Negative value
    char *str1 = "hello";
    char *str2 = "Hello ";
    printf("%d\n", strcmp(str1, str2));
}