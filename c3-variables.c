#include <stdio.h>

int main() {
    int x; // Declaration
    x = 123; // Initialization

    int y = 123; // Declaration and initialization

    int age = 22; // Integer
    float gpa = 2.05; // Floating point number
    char grade = 'A'; // Single character
    char name[] = "Nodi"; // Array od characters

    // Format specifiers
    printf("You are %d old\n", age); // %d - decimal
    printf("Your gpa is %.2f\n", gpa); // %f - float
    printf("Your grade is %c\n", grade); // %c - character
    printf("Your name is %s", name); // %s - string
    
    return 0;
}