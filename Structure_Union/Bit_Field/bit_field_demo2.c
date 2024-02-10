#include <stdio.h>
typedef union // Without using BitField
{
    unsigned int x;
    unsigned int y;
} Bit1_t;

typedef union // With BitField
{
    unsigned int x : 2;
    unsigned int y : 3;
} Bit2_t;

int main()
{
    Bit1_t bitfield1;
    Bit2_t bitfield2;

    printf("size of union Without BitField = %ld\n", sizeof(Bit1_t));
    printf("size of union With BitField = %ld\n", sizeof(Bit2_t));
    return 0;
}