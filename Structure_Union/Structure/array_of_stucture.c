#include <stdio.h>

struct car_detail // car_detail is stucture tags
{
    char car_name[50];
    long int price;
    char colour[50];
    float mileage;
};
int main()
{
    struct car_detail c[2];
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("Enter the car name : \n");
        scanf(" %[^\n]", c[i].car_name);
        printf("Enter the car %d price : \n", i + 1);
        scanf("%ld", &c[i].price);
        printf("Enter the car colour : \n");
        scanf(" %[^\n]", c[i].colour);
        printf("Enter the car %d mileage : \n", i + 1);
        scanf("%f", &c[i].mileage);
    }
    printf("Cars details is :\n");
    for (i = 0; i < 2; i++)
    {
        printf("car %d name = %s\n", i + 1, c[i].car_name);
        printf("car %d price = %ld\n", i + 1, c[i].price);
        printf("car %d colour = %s\n", i + 1, c[i].colour);
        printf("car %d mileage = %f\n", i + 1, c[i].mileage);
    }
    return 0;
}