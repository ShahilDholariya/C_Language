#include <stdio.h>

int main()
{
    FILE *fp;
    char c;
    fp = fopen("file1.txt", "r");

    // c = fgetc(fp);
    // printf("%c", c);
    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
    }
    fclose(fp);
    printf("\n");
    return 0;
}