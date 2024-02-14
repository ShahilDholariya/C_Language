#include <stdio.h>
int main()
{
    FILE *fp;
    char str[200];
    fp = fopen("file.txt", "r");
    while (fscanf(fp, "%s", str) != EOF)
    {
        printf("%s ", str);
    }
    fclose(fp);
    return 0;
}