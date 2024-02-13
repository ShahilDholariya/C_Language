#include <stdio.h>

int main()
{
    FILE *fp;
    char str[300];

    fp = fopen("file2.txt", "r");
    printf("%s\n", fgets(str, 200, fp));

    fclose(fp);
    return 0;
}