#include <stdio.h>
#include <math.h>

int main() {

    // Square root
    int a = sqrt(9);
    printf("The quare root of 9: %d\n", a, a);

    // Exponation
    int b = pow(2, 8);
    printf("2 ^ 8: %d\n", b);

    // Round a number
    float c = round(3.4);
    printf("3.4 rounded: %.1f\n", c);

    // Round to a number up
    float d = ceil(3.4);
    printf("Ceil of 3.4: %.1f\n", d);

    // Round to the closest smaller number
    float e = floor(3.4);
    printf("Floor of 3.4: %.1f", e);
    
    // Abosulute value
    int f = fabs(-23);
    printf("The absolute value of -23: %d", f);
    
    return 0;
}