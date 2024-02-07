#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char str1[100];
    gets(str1);
    char str2[100];
    gets(str2);

    char *result = strstr(str1, str2);
    if (result != '\0')
    {
        printf("%s", result);
    }
    else
    {
        printf("not found");
    }
    return 0;
}