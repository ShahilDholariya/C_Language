#include <stdio.h>

struct car_detail // car_detail is stucture tags
{
    char *car_name;
    long int price;
};
int main()
{
    struct car_detail c1 = {"Scorpio N", 1300000};
    struct car_detail c2 = {.car_name = "Thar", .price = 1600000};
    struct car_detail *p1 = &c1;
    struct car_detail *p2 = &c2;
    printf("Car name = %s ,Price = %ld\n", p1->car_name, p1->price);
    printf("Car name = %s ,Price = %ld\n", p2->car_name, p2->price);

    return 0;
}