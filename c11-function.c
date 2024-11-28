#include <stdio.h>

// Simple functin
void birthday() {
    printf("This is my first function in c");
}

// Add argument to the function
// Define the data type in the arguments
void sum(int x, int y) {
    int soma = x + y;
    printf("%d", soma);
}

// Use return
// To use return we start the function with the datatype its going to return
// In this case double because it returns double
double division(double x, double y) {
    int division = x / y;

    return division;
}

int main() {

    // Call the function
    birthday(10, 15);
    
    // Call the function
    sum(10, 10);

    // Call the double function
    double resultado = division(20, 10);
    printf("\nResult: %.1lf", resultado);
    
    
    return 0;
}