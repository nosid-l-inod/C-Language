#include <stdio.h>

// enum IS NOT A STRING
// Define enum
// Its an array of constants
enum Day {Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7};

int main() {
    // Its an integer

    enum Day today = Sunday;
    
    if (today == Sunday) {
        printf("Its sunday");
    }

    return 0;
}