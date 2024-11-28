#include <stdio.h>
#include <stdbool.h>

int main() {

    char a = 'C'; // Stores a single character -> %c
    char b[] = "Michael Jordan"; // Array of characters -> %s

    float c = 3.123456; // 4 bytes | 6 - 7 digits | (32 bits precision) -> %f
    double d = 3.123456789; // 8 bytes | 15 - 16 digits | (64 bytes precision) -> %lf

    bool e = true; // 1 byte (true or false) -> %d
    
    // This converts numbers into characters in the ASCII table
    // 65 to 90 = A to Z
    // 97 to 122 = a to z
    // %c -> Letter
    // %d -> Number
    char f = 65; // 1 byte (-128 to +127) %d or %c
    printf("Number: %d\n", f);
    printf("Character: %c\n", f);

    unsigned char g = 255; // 1 byte (0 to +255) %d or %c

    short h = 32767; // 2 bytes (-32,768 to +32,767) %d

    int i = 2147483647; // 4 bytes (-2,147,483,648, to +2,147,483,647) %d

    // long


    return 0;
}