#include <stdio.h>

// Declare before the main function
void hello(char[], int);

int main() {
    // Function prototype
    // The compilers gives an error if one argument is missing
    // Ensure that functions are called with correct arguments
    // The code is only compiled and executed if the function have the correct arguments

    char name[] = "Cristiano Ronaldo";
    int age = 39;

    hello(name, age);
        
    return 0;
}

// The funtion
void hello(char name[], int age) {
    printf("Your name is: %s\n", name);
    printf("You are %d years old.", age);
}