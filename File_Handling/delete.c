#include <stdio.h>

int main()
{
    if (remove("delete.txt") == 0)
        printf("Deleted successfully\n");
    else
        printf("Unable to delete the file\n");

    return 0;
}
