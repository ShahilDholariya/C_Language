#include <stdio.h>
int main()
{
    FILE *source, *destination;
    char ch[100];
    source = fopen("source.txt", "r");
    destination = fopen("destination.txt", "w");

    if (source == NULL || destination == NULL)
    {
        printf("Error opening files.\n");
        return 1;
    }

    while (fgets(ch, 100, source) != NULL)
    {
        fputs(ch, destination);
    }

    fclose(source);
    fclose(destination);

    return 0;
}