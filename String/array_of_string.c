#include <stdio.h>
#include <string.h>
int main()
{
    char *fruits[] = {"2 Oranges", "3 Apples", "3 Bananas", "1 Pineapple"};
    if (strcmp(fruits[0], fruits[2]) > 0)
        printf("%s are lesser than %s\n", fruits[0], fruits[2]);
    else if (strcmp(fruits[0], fruits[2]) < 0)
        printf("%s are greater than %s\n", fruits[0], fruits[2]);
    return 0;
}