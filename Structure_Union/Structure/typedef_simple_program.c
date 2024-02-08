#include <stdio.h>

typedef struct students
{
    char *name;
    int roll_no;
    float percentage;
} stud_t; // Giving a new name to stucture

int main()
{
    stud_t s1, s2;
    s1.name = "Hardik";
    s2.name = "Trupal";
    printf("student1 name = %s\n", s1.name);
    printf("student2 name = %s\n", s2.name);
    s1.roll_no = 1;
    s2.roll_no = 2;
    printf("%s Roll no = %d\n", s1.name, s1.roll_no);
    printf("%s Roll no = %d\n", s2.name, s2.roll_no);

    return 0;
}
