#include <stdio.h>

enum Day
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

// Function to print the day of the week
void printDay(enum Day day)
{
    switch (day)
    {
    case SUNDAY:
        printf("Sunday\n");
        break;
    case MONDAY:
        printf("Monday\n");
        break;
    case TUESDAY:
        printf("Tuesday\n");
        break;
    case WEDNESDAY:
        printf("Wednesday\n");
        break;
    case THURSDAY:
        printf("Thursday\n");
        break;
    case FRIDAY:
        printf("Friday\n");
        break;
    case SATURDAY:
        printf("Saturday\n");
        break;
    default:
        printf("Invalid day\n");
        break;
    }
}

int main()
{
    // Using the Day enum
    enum Day today = TUESDAY;
    printDay(today);

    return 0;
}
