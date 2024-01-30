#include <stdio.h>

int main()
{
    // Array declaration and initialization
    int numbers[] = {1, 2, 3, 4, 5};
    // int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Array elements: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}
