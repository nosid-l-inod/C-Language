// Author: doni
// Date: 24-11-2024
// Description: Data types in c language

#include <stdio.h>
#include <stdbool.h>


int main() {
    
    // Characters
    char character = 'C';           // Single characters the format is  %c
    char name[] = "Jordan";         // Strings  %s
    char letter = 100;              // -128 to 127. %c to see a character and %d to see a number


    // Decimals
    float gpa = 2.1;                // 4 bytes Decimal numbers  %f
    double gpa2 = 3.21;             // %lf - 8 bytes, Decimal numbers (More precision than float)
    
    // Booleans
    bool online = true;             // %d - 1 byte, true or false

    // Integers
    short shortValue = 32767;       // %d - Up to 32767
    int intValue = 2147483647;       // %d - Up to 2 billion 
    
    
    return 0;
}

