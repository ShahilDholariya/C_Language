#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("file2.txt", "w");
    fputs("hello File Handling", fp);

    fclose(fp);
    return 0;
}