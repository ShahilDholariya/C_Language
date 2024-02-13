#include <stdio.h>
int main()
{
    FILE *fp;
    char string[100]="This is File handling in C programming.";

    fp = fopen("Demo2_file.txt", "a+");
    fprintf(fp, "%s", string);
    printf("%s\n", string);

    return 0;
}