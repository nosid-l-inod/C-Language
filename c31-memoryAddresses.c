// Name: Memory address
// Description: Memory address stores the addresses of variables

#include <stdio.h>

int main() {

    // Create variables
    char a = 'x';
    char b = 'y';
    char c = 'z';
    
    // Show the addresses of the variables
    printf("Address of a: %p\n", &a);
    printf("Address of b: %p\n", &b);
    printf("Address of c: %p\n", &c);
    
    return 0;
}