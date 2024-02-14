#include <stdio.h>
#define LIMIT 5 // macro definition

int main()
{
    for (int i = 0; i < LIMIT; i++)
    {
        printf("%d \n", i);
    }

    printf("Date = %s\n", __DATE__); // Pre-difined Macro
    return 0;
}
