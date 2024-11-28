#include <stdio.h>
#include <string.h>
 
int main() {

    // Swap 2 varibles

    // Set the size
    char x[20] = "Ronaldo";
    char y[20] = "Messi";
    char temp[10];
    
    printf("value of x: %s\n", x);
    printf("value of y: %s\n\n", y);

    // Swap
    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("New x: %s\n", x);
    printf("New y: %s\n", y);

    
    return 0;
}