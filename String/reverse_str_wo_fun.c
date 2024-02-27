#include <stdio.h>
#include <string.h>

int main()
{
    int i, j;
    int size = 0;
    char s1[100] = "hii";
    char s2[100];
    for (i = 0; s1[i] != '\0'; i++)
    {
        size++;
    }
    j = size - 1;
    for (i = 0; s1[i] != '\0'; i++)
    {
        s2[j] = s1[i];
        j--;
    }
    printf("%s", s2);

    return 0;
}