#include <stdio.h>
typedef struct students
{
    char *name;
    int roll_no;
    float percentage;
} stud;
int main()
{
    // initialization in diffrent diffrent ways
    stud s1 = {"sahil", 1, 90.00};
    stud s2 = {.roll_no = 2, .percentage = 80.75, .name = "Trupal"};
    printf("%s %d %f\n", s1.name, s1.roll_no, s1.percentage);
    printf("%s %d %f\n", s2.name, s2.roll_no, s2.percentage);
    return 0;
}