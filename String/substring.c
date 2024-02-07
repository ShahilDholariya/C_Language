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
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        int j = 0;
        while (sub[j] != '\0')
        {
            if (str[i] == sub[j])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        if (sub[j] == '\0')
        {
            result = &str[i - j];
            break;
        }
    }
    if (result)
    {
        printf("The final string is : %s\n", result);
    }
    else
    {
        printf("substring not found");
    }
    return 0;
}