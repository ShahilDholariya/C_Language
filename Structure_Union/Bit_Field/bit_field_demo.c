#include <stdio.h>
typedef struct // Without using BitField
{
    unsigned int x;
    unsigned int y;
} Bit1_t;

typedef struct // With BitField
{
    unsigned int x : 2;
    unsigned int y : 3;
} Bit2_t;

int main()
{
    Bit1_t bitfield1;
    Bit2_t bitfield2;

    printf("size of structure Without BitField = %ld\n", sizeof(Bit1_t));
    printf("size of structure With BitField = %ld\n", sizeof(Bit2_t));
    return 0;
}