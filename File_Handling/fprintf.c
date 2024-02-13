#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("file.txt", "w");
    fprintf(fp, "Hello file is fprintf...\n");
    fclose(fp);
    return 0;
}