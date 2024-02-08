#include <stdio.h>
// Define a structure
struct car_detail // car_detail is stucture tags
{
    char *car_name;
    long int price;
    char *colour;
    float mileage;
} car1, car2; // Declare stucture object

int main()
{
    // access the strcture variable using . operator
    car1.car_name = "swift";
    car1.price = 600000;
    car1.colour = "Red";
    car1.mileage = 19.75;
    printf("Car1 name = %s\n", car1.car_name);
    printf("Price = %ld\n", car1.price);
    printf("Colour = %s\n", car1.colour);
    printf("Mileage = %f\n", car1.mileage);

    car2.car_name = "scorpio n";
    car2.price = 1400000;
    car2.colour = "Black";
    car2.mileage = 14.50;
    printf("Car2 name = %s\n", car2.car_name);
    printf("Price = %ld\n", car2.price);
    printf("Colour = %s\n", car2.colour);
    printf("Mileage = %f\n", car2.mileage);

    return 0;
}