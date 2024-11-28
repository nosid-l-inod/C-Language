// rand() - generate a random number between 0 to 30767
// rand() % max - 1 To set the limit
// rand() Generates always the same number so we need to set srand()
// srand(time(0))

// Generate with min and max value
// rand() % (max - (min + 1)) + min
// if (min = 10) and (max = 20) it will generate (20 - 10 = 10) 10 possible values

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    // Generate number with max interval
    int max = 2;
    int number = rand() % (max + 1); // Generate the number

    printf("Random number: %d\n\n", number);


    // Generate number with max and min interval
    int min2 = 10;
    int max2 = 20;
    int number2 = rand() % (max2 - (min2 + 1)) + min2;

    printf("Random number 2: %d\n", number2);
    
    return 0;
}