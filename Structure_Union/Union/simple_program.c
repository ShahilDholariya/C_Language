#include <stdio.h>
#include <string.h>
// Define a union named MyUnion
union abc
{
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main()
{
    union abc myvar;

    // Set values for the union members
    myvar.intValue = 42;
    printf("Integer Value: %d\n", myvar.intValue);

    myvar.floatValue = 3.14;
    printf("Float Value: %f\n", myvar.floatValue);

    strcpy(myvar.stringValue, "Good Morning");
    printf("String Value: %s\n", myvar.stringValue);

    return 0;
}
