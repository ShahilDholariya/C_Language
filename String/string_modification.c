#include <stdio.h>
void main()
{
    char s[] = "This is Shahil Dholariya";

    printf("%.7s\n", s); // print only "This is"

    printf("%.6s\n", s + 8); // print only "Shahil"
}