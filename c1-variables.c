// Author: doni
// Date: 24-11-2024
// Description: Variables in C language

// Variables are containers to store a value

#include <stdio.h>

int main() {

    int number; // Declaration
    number = 10; // Initialization

    // Declaring and initializing variables
    char character = 'A';
    int age = 20;
    float gpa = 2.5;
    char name[] = "Jack";

    // Display the values
    printf("Your character: %c\n", character);
    printf("Your age: %d\n", age);
    printf("Your gpa: %f\n", gpa);
    printf("Your name: %s\n");
    
    return 0;
}