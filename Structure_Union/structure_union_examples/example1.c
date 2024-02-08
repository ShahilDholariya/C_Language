#include <stdio.h>
#include <string.h>
struct store
{
    union object
    {
        struct book
        {
            char name[100];
            int page;
            double price;
        } b;

        struct shirt
        {
            char colour[20];
            int size;
        } s;
    } obj;
};

int main()
{
    struct store item;

    item.obj.b.price = 475;
    strcpy(item.obj.s.colour, "Red");
    item.obj.s.size = 26;
    item.obj.b.page = 1000;

    printf("Book Price = %lf\n", item.obj.b.price);
    printf("Shirt colour = %s\n", item.obj.s.colour);
    printf("Shirt size = %d\n", item.obj.s.size);
    printf("Book page = %d\n", item.obj.b.page);
    printf("size of structure = %ld\n", sizeof(item));
    return 0;
}