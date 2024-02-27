#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[50];
    char address[50];
    int age;
    long int mo_number;
} Database_t;

Database_t stud[100];
int numstud = 0;
void insert()
{
    Database_t newstud;
    printf("\n");
    printf("Enter the name:");
    scanf("%s", newstud.name);
    printf("Enter the Address:");
    scanf("%s", newstud.address);
    printf("Enter the Age:");
    scanf("%d", &newstud.age);

    printf("Enter the Mobile number:");
    scanf("%ld", &newstud.mo_number);
    long int digit;
    int count = 0;
    digit = newstud.mo_number;
    while (digit != 0)
    {
        count++;
        digit = digit / 10;
    }

    while (count != 10)
    {
        printf("Invalid Mobile number, Please enter valid mobile number(Should be 10 Digits) :");
        scanf("%ld", &newstud.mo_number);
        digit = newstud.mo_number;
        count = 0;
        while (digit != 0)
        {
            count++;
            digit = digit / 10;
        }
    }
    stud[numstud++] = newstud;
    printf("Data added sucessfully\n");
    //     printf("%s %s\n", newstud.name, newstud.address);
}
void delete()
{
    if (numstud == 0)
    {
        printf("No student data avalible\n");
    }
    else
    {
        int id;
        printf("Please Enter id:\n");
        scanf("%d", &id);

        if (id < 1 || id > numstud)
        {
            printf("Invalid id, Please enter correct id\n");
        }
        for (int i = id - 1; i < numstud; i++)
        {
            stud[i] = stud[i + 1];
            numstud--;
            printf("Id deleted sucessfully\n");
        }
    }
}

void display()
{
    if (numstud == 0)
    {
        printf("No student data avalible\n");
    }
    for (int i = 0; i < numstud; i++)
    {
        printf("Id : %d, Name : %s, Address : %s, Age : %d, Number : %ld\n", i + 1, stud[i].name, stud[i].address, stud[i].age, stud[i].mo_number);
    }
}
void show()
{
    if (numstud == 0)
    {
        printf("No student data avalible\n");
    }
    else
    {
        int id;
        printf("Please Enter id:\n");
        scanf("%d", &id);
        if (id < 1 || id > numstud)
        {
            printf("Invalid id, Please enter correct id\n");
        }
        else
        {
            printf("Id : %d, Name : %s, Address : %s, Age : %d, Number : %ld\n", id, stud[id - 1].name, stud[id - 1].address, stud[id - 1].age, stud[id - 1].mo_number);
        }
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("\n");
        printf("1. Insert new entry\n");
        printf("2. Delete entry\n");
        printf("3. show all Entry\n");
        printf("4. Please Enter which entry do you want to show:\n");
        printf("5. for exits\n");
        printf("\n");
        printf("Enter the Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            show();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid Choice\n");
        }
    }
    return 0;
}