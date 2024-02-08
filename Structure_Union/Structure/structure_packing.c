#include <stdio.h>
#pragma pack(1)
struct abc
{
    char a;
    int c;
    char b;
    float d;

};//__attribute__((packed));;

int main()
{
    struct abc var;
    printf("size of structure = %ld\n", sizeof(var));
    return 0;
}