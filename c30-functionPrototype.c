// Filename: Function prototype
// Description: Function prototype is a function declaration without the body of the function

// Hello function prototype
void hello(char name[], int age);

#include <stdio.h>

int main() {

    // Defining variables
    char name[] = "Ronaldo";
    int age = 40;

    // Calling hello function
    hello(name, age);
    
    return 0;
}


// Hello function
void hello(char name[], int age) {
    printf("Hello %s, you are %d years old", name, age);
}