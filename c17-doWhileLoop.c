#include <stdio.h>

int main() {

    // Do while loop always execute the code block at least once, then it checks the condition

    int number = 0;
    int sum = 0;

    do {
        printf("Type a number: ");
        scanf("%d", &number);

        sum += number;
    } while (number > 0); // Condition
    
    printf("\nSoma dos numeros: %d", sum);
    
    return 0;
}