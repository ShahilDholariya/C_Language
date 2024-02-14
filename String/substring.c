#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str);
    int length1 = strlen(str);
    char sub[100];
    gets(sub);
    int length2 = strlen(sub);
    char *result;
    int i, j;
    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        // printf("str[%d] = %c\r\n", i, str[i]);
        // printf("sub[%d] = %c\r\n", j, sub[j]);
        while (str[i] == sub[j] && str[j] != '\0')
        {
            i++;
            j++;
        }
        if (sub[j] == '\0')
        {
            // printf("i=%d\r\n", i);
            // printf("j=%d\r\n", j);
            result = &str[i - j];
            // printf("str[%d]=%c\r\n", i - j, str[i - j]);
            break;
        }
        else
        {
            i++;
        }
    }
    if (result)
    {
        printf("The final string is : %s\n", result);
    }
    else
    {
        printf("substring not found\n");
    }
    return 0;
}
