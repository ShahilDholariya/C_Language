#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char s1[50];
    printf("Enter first string :");
    gets(s1);
    char s2[50];
    printf("Enter second string :");
    gets(s2);
    char s3[100];
    while (s1[i] != '\0')
    {
        s3[j] = s1[i];
        i++, j++;
    }
    i = 0;
    while (s2[i] != '\0')
    {
        s3[j] = s2[i];
        i++, j++;
    }
    printf("Append string = %s\n", s3);
    return 0;
}