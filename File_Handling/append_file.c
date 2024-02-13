#include <stdio.h>
int main()
{
    FILE *fp;
    char string[100] = "This is C programming.";

    fp = fopen("afile.txt", "a");
    fprintf(fp, "%s", string);

    return 0;
}