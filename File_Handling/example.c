#include <stdio.h>
int main()
{
    FILE *fptr;
    int id;
    char name[30];
    float marks;
    fptr = fopen("emp.txt", "w+");
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return 1;
    }
    printf("Enter the id\n");
    scanf("%d", &id);
    fprintf(fptr, "Id= %d\n", id);
    printf("Enter the name \n");
    scanf("%s", name);
    fprintf(fptr, "Name= %s\n", name);
    printf("Enter the Marks\n");
    scanf("%f", &marks);
    fprintf(fptr, "Marks= %.2f\n", marks);
    fclose(fptr);

    return 0;
}