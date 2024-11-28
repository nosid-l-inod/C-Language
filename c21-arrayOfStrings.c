#include <stdio.h>
#include <string.h>

int main() {

    // Array of strings


    // Each element -> max size = 50
    char cars[][50] =  {"Mustang", "Ferrari", "Aston Martin"};
    
    printf("\nFirst car: %s\n", cars[0]);



    // Update element
    strcpy(cars[0], "Jaguar");

    printf("New first car: %s\n\n", cars[0]);


    // Iterate
    int length = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < length; i++) {
        printf("Cars %d: %s\n", i, cars[i]);
    }

    
    return 0;
}