#include <stdio.h>

int findMax(int x, int y) {
    return (x > y) ? x : y;
}

int main() {

    int max = findMax(98, 30);

    printf("Max value: %d", max);
    
    // Outro exemplo
    int a = 10;
    int b = 30;

    // This is the ternary operator
    (a > b) ? printf("\na is bigger") : printf("\nb is bigger");
    
    return 0;
}