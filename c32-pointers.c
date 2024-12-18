// Filename: Pointers
// Description: Holds memmory address of another variable
// It has to be the same data type as the variable

#include <stdio.h>

int main() {

    // Variable age
    int age = 21;

    printf("Value of age: %d\n", age);
    printf("Address of age: %p\n", &age);


    // Pointer age is equal to the address of age
    int *pAge = &age;

    printf("\nValue of pAge: %d\n", *pAge);
    printf("Address of pAge: %p\n", &pAge);

    return 0;    
}