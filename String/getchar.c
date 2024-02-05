#include <stdio.h>
int input(char str[], int n)
{
    int ch, i = 0;

    // Read one by one character from user input until end of line
    while ((ch = getchar()) != '\n')
    {
        if (i < n)
            str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}
int main()
{
    char str[100];
    int n = input(str, 5);
    printf("%s\n", str);
    return 0;
}