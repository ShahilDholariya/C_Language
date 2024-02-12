#include <stdio.h>

// Define a bitfield structure for date components
typedef struct
{
    unsigned int day : 5;   // 5 bits for day (1-31)
    unsigned int month : 4; // 4 bits for month (1-12)
    unsigned int year : 12; // 12 bits for year (0-4095)
} Date_t;

int main()
{
    Date_t Date;
    Date.day = 14;
    Date.month = 2;
    Date.year = 2022;

    printf("%ld\n", sizeof(Date_t)*8);
    printf("Day: %u\n", Date.day);
    printf("Month: %u\n", Date.month);
    printf("Year: %u\n", Date.year);

    return 0;
}
