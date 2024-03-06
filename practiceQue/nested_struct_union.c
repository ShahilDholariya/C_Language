#include <stdio.h>

typedef struct
{
    int id;
    char name[30];
    char type;
    union data
    {
        int annualSalary;   // for full-time employees
        int hourlyRate;     // for part-time employees
        int contractAmount; // for contract employees
    } data_t;
} info_t;
int main()
{
    info_t inforamation = {1, "sahil", 'F', 50000};
    // printf("Full-Time Employee:\n");
    printf("ID: %d\n", inforamation.id);
    printf("Name: %s\n", inforamation.name);
    printf("Type: Full-Time\n");
    printf("Annual Salary: %d\n", inforamation.data_t.annualSalary);

    return 0;
}