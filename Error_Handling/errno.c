#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{

    FILE *fp;
    int errno;
    fp = fopen("unexist.txt", "r");

    if (fp == NULL)
    {
        printf("Value of errno: %d\n", errno); // Print an error number
        perror("Error printed by perror");     // Used to print error in string form
    }
    else
    {
        fclose(fp);
    }

    return 0;
}