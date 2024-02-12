#include <stdio.h>
typedef struct
{
    char name[50];
    int age;
    float marks;
} student_t;

void report(student_t *s) // Passing Structure Variable as Function argument
{
    printf("Name = %s\nAge = %d\nMarks = %.2f\n", s->name, s->age, s->marks);
}

int main()
{
    student_t s1 = {"sahil", 23, 90.00};
    student_t s2 = {"Trupal", 22, 90.00};
    report(&s1);
    printf("\n");
    report(&s2);
    return 0;
}
