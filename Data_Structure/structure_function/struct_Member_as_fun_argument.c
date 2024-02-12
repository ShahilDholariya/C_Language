#include <stdio.h>
typedef struct
{
    char name[50];
    int age;
    float marks;
} student_t;

void report(char name[], int age, float marks) // Passing Structure Member as Function argument
{
    printf("Name = %s\nAge = %d\nMarks = %.2f\n", name, age, marks);
}

int main()
{
    student_t s1 = {"sahil", 23, 90.00};
    report(s1.name, s1.age, s1.marks);
    return 0;
}
