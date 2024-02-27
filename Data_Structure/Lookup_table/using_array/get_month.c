#include <stdio.h>

#define TABLE_SIZE 12

// Define a structure for a key-value pair
typedef struct
{
    int key;
    char *value;
} KeyValuePair;

// Function to look up a value in the table based on the key
const char *lookup(KeyValuePair table[], int tableSize, int key)
{
    for (int i = 0; i < tableSize; i++)
    {
        if (table[i].key == key)
        {
            return table[i].value; // Key found, return the associated value
        }
    }
    return "Unknown";
}

int main()
{
    // Initialize a lookup table with month numbers and their names
    KeyValuePair monthTable[TABLE_SIZE] = {
        {1, "January"},
        {2, "February"},
        {3, "March"},
        {4, "April"},
        {5, "May"},
        {6, "June"},
        {7, "July"},
        {8, "August"},
        {9, "September"},
        {10, "October"},
        {11, "November"},
        {12, "December"}};

    // Use the lookup function to retrieve values based on keys
    printf("Month for number 1: %s\n", lookup(monthTable, TABLE_SIZE, 1));
    printf("Month for number 6: %s\n", lookup(monthTable, TABLE_SIZE, 6));
    printf("Month for number 9: %s\n", lookup(monthTable, TABLE_SIZE, 9));
    printf("Month for number 13: %s\n", lookup(monthTable, TABLE_SIZE, 13)); // Key not found

    return 0;
}
