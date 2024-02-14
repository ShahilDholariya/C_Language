#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{

    FILE *fp;
    fp = fopen("unexist.txt", "r");

    if (fp == NULL)
    {
        printf("Value of errno: %d\n", errno); // Print an error number
        perror("Error printed by perror");     // Used to print errorno
        fprintf(stderr, "Error opening file: %s\n", strerror(errno));
    }
    else
    {
        fclose(fp);
    }

    return 0;
}