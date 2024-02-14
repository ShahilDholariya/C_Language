#include <stdio.h>
int main(int argc, char *argv[])
{
    printf("File name : %s\n", argv[0]);
    if (argc == 3)
        printf("argument is :%s %s\n",argv[1], argv[2]);
    else if (argc > 3)
        printf("Too Many arguments\n");
    else
        printf("no argument added\n");

    return 0;
}