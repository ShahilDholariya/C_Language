#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10

// Define a structure for a student
typedef struct {
    int studentID;
    char name[50];
    int age;
} Student;

// Define the hash table structure
typedef struct {
    Student* table[TABLE_SIZE];
} HashTable;

// Simple hash function for student IDs
unsigned int hashFunction(int studentID) {
    return studentID % TABLE_SIZE;
}

// Function to insert a student into the hash table
void insert(HashTable* ht, Student* student) {
    unsigned int index = hashFunction(student->studentID);

    // Linear probing to handle collisions
    while (ht->table[index] != NULL) {
        index = (index + 1) % TABLE_SIZE;
    }

    ht->table[index] = student;
}

// Function to retrieve a student based on student ID
Student* get(HashTable* ht, int studentID) {
    unsigned int index = hashFunction(studentID);

    // Linear probing to find the correct index
    while (ht->table[index] != NULL && ht->table[index]->studentID != studentID) {
        index = (index + 1) % TABLE_SIZE;
    }

    return ht->table[index];
}

int main() {
    HashTable studentTable;

    // Initialize the hash table
    for (int i = 0; i < TABLE_SIZE; i++) {
        studentTable.table[i] = NULL;
    }

    // Insert students into the hash table
    insert(&studentTable, &(Student){101, "Alice", 20});
    insert(&studentTable, &(Student){205, "Bob", 22});
    insert(&studentTable, &(Student){309, "Charlie", 21});
    insert(&studentTable, &(Student){412, "David", 23});

    // Retrieve and print information about students
    int studentIDs[] = {101, 205, 309, 412, 555}; // 555 is not in the table

    for (int i = 0; i < sizeof(studentIDs) / sizeof(studentIDs[0]); i++) {
        Student* student = get(&studentTable, studentIDs[i]);
        if (student != NULL) {
            printf("Student ID: %d, Name: %s, Age: %d\n", student->studentID, student->name, student->age);
        } else {
            printf("Student with ID %d not found.\n", studentIDs[i]);
        }
    }

    // Clean up: no need to free memory, as the hash table stores pointers to students, not copies

    return 0;
}
